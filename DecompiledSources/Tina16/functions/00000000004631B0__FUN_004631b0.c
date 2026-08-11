/* Ghidra address: 004631b0 */
/* Ghidra symbol: FUN_004631b0 */


ulonglong FUN_004631b0(undefined2 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 local_30 [8];
  int local_28;
  undefined4 uStack_24;
  
  thunk_FUN_04125dff(local_30);
  iVar1 = (**(code **)PTR_DAT_02004be8)(local_30,param_1,0x400,0,3);
  if (iVar1 == 0) {
    uVar2 = (ulonglong)local_28;
  }
  else {
    iVar1 = (**(code **)PTR_DAT_02004be8)(local_30,param_1,0x400,0,5);
    if (iVar1 == 0) {
      uVar2 = FUN_0040c770(CONCAT44(uStack_24,local_28));
    }
    else if (iVar1 == -0x7ffdfffb) {
      uVar2 = FUN_00463f70(param_1);
      uVar2 = uVar2 & 0xff;
    }
    else {
      FUN_00460800(iVar1,*param_1,0x14);
      uVar2 = 0;
    }
  }
  return uVar2;
}

