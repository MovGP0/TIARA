/* Ghidra address: 01bb0aa0 */
/* Ghidra symbol: FUN_01bb0aa0 */


undefined4 FUN_01bb0aa0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c [3];
  
  cVar1 = FUN_01bb06d0(param_1,param_2,local_2c,&local_30);
  if (cVar1 == '\0') {
    cVar1 = FUN_01bb06d0(param_1,(short)param_2 + -5000,local_2c,&local_30);
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_01bb0aec;
    }
  }
  uVar3 = (undefined4)CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
LAB_01bb0aec:
  if ((char)uVar3 != '\0') {
    FUN_00415d10(param_3,local_30,0);
    uVar2 = FUN_00414df0(param_3);
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)local_2c[0],uVar2,(longlong)local_30);
  }
  return uVar3;
}

