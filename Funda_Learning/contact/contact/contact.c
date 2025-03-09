#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}


void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入号码:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}


void ShowContact(const Contact* pc)
{
	printf("%-10s %-3s %-5s %-10s %-30s\n", "姓名", "年龄", "性别", "号码", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-4d %-5s %-10s %-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


static int Find_by_name(const Contact* pc, char* name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
			return 1;
	}
	return -1;
}

void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("输入要删除联系人的姓名:>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);
	
	if (pos == -1)
	{
		printf("要删除的联系人不存在\n");
		return;
	}

	for (int i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}


void SearchContact(const Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入待查找联系人的姓名:>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1)
	{
		printf("通讯录中不存在\n");
		return;
	}

	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-10s %-4d %-5s %-12s %-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}


void ModifyContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入联系人的姓名:>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1);
	{
		printf("联系人不存在\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入号码:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}


int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}

void SortContact(Contact* pc)
{
	qsort(pc, pc->sz, sizeof(PeoInfo), cmp_by_name);
	printf("排序成功\n");
}
