/* Ghidra address: 01c82b90 */
/* Ghidra symbol: FUN_01c82b90 */


void FUN_01c82b90(longlong param_1,int param_2,int param_3,ulonglong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffff68;
  uint7 uVar7;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar7 = (uint7)((ulonglong)in_stack_ffffffffffffff68 >> 8);
  if (*(char *)(param_1 + 0x8f) == '\0') {
    uVar1 = FUN_01992680(*(undefined8 *)(param_1 + 0x98),0x4b0,param_2 + -0x18,param_3,
                         (ulonglong)uVar7 << 8,0,param_4,0x7fffffff,0x7fffffff,0);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x48))
              (*(longlong **)(param_1 + 0x90),param_5 + -1,uVar1);
    FUN_0043f750(&local_38,param_5);
    FUN_00416cd0(&local_30,3,param_4,&DAT_01c82f78,local_38);
    FUN_01992680(*(undefined8 *)(param_1 + 0x98),4,param_2 + 0x10,param_3,1,0,local_30,10,10,1);
  }
  else {
    FUN_01992680(*(undefined8 *)(param_1 + 0x98),0x3a,param_2,param_3,CONCAT71(uVar7,2),0,param_4,
                 0x7fffffff,0x7fffffff,0);
  }
  puVar5 = &DAT_01c82f88;
  FUN_00416cd0(&local_40,3,&DAT_01c82f88,param_4,&DAT_01c82f88);
  FUN_01992680(*(undefined8 *)(param_1 + 0x98),0x3e9,param_2 + 0x20,param_3,
               (ulonglong)puVar5 & 0xffffffffffffff00,0,local_40,0xf,0x7fffffff,0);
  iVar2 = param_2 + 0x58;
  puVar5 = &DAT_01c82f88;
  FUN_00416cd0(&local_48,3,&DAT_01c82f88,param_4,&DAT_01c82f88);
  uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_01992680(*(undefined8 *)(param_1 + 0x98),3,iVar2,param_3,uVar6,0,local_48,0x7fffffff,
               0xfffffffa,0);
  iVar4 = param_3 + 0x10;
  FUN_01992680(*(undefined8 *)(param_1 + 0x98),3,iVar2,iVar4,uVar6 & 0xffffffffffffff00,0,param_4,
               0x7fffffff,0xfffffffa,0);
  iVar3 = param_2 + 0x10;
  param_4 = param_4 & 0xffffffff00000000;
  FUN_01993890(*(undefined8 *)(param_1 + 0x98),param_2,param_3,iVar3,param_3,0,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_01993890(*(undefined8 *)(param_1 + 0x98),iVar3,param_3,iVar3,iVar4,0,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_01993890(*(undefined8 *)(param_1 + 0x98),iVar3,iVar4,iVar2,iVar4,0,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_01993890(*(undefined8 *)(param_1 + 0x98),iVar3,param_3,param_2 + 0x20,param_3,0,param_4);
  FUN_01993890(*(undefined8 *)(param_1 + 0x98),param_2 + 0x48,param_3,iVar2,param_3,0,
               param_4 & 0xffffffff00000000);
  FUN_00414560(&local_48,4);
  return;
}

