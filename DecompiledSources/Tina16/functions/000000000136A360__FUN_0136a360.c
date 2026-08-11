/* Ghidra address: 0136a360 */
/* Ghidra symbol: FUN_0136a360 */


void FUN_0136a360(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 local_30 [2];
  int local_20;
  int local_1c;
  
  local_30[0] = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar3 = FUN_0198d430(uVar1);
  piVar5 = &local_20;
  FUN_01a982d0(uVar3,param_2,param_3,&local_1c,piVar5);
  uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  FUN_01b1cd00(&local_1c,&local_20);
  FUN_0041ddd0(local_30,PTR_PTR_02003238);
  FUN_017baeb0(&PTR_FUN_017ba830,local_30[0],uVar1,0);
  cVar2 = FUN_019922a0(uVar1,local_1c,local_20);
  if (cVar2 == '\0') {
    cVar2 = FUN_019925c0(uVar1,local_1c,local_20);
    if (cVar2 == '\0') {
      FUN_017baf30();
      goto LAB_0136a45a;
    }
  }
  plVar4 = (longlong *)FUN_0198d430(uVar1);
  (**(code **)(*plVar4 + 0x30))
            (plVar4,local_1c + -3,local_20 + -3,local_1c + 3,CONCAT44(uVar6,local_20 + 3));
  FUN_0199e310(uVar1,0,1,0);
  FUN_017baf00();
LAB_0136a45a:
  FUN_01364ff0(param_1,param_2,param_3);
  FUN_00414480(local_30);
  return;
}

