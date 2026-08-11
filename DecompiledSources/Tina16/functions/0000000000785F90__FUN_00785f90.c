/* Ghidra address: 00785f90 */
/* Ghidra symbol: FUN_00785f90 */


undefined8 * FUN_00785f90(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_218 [512];
  
  lVar2 = FUN_00786090(param_1);
  if (lVar2 == 0) {
    FUN_00785ef0(param_1,param_2,L"Caption");
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((lVar2 == 0) || (lVar2 == 0)) {
      uVar3 = FUN_00786090(param_1);
      uVar1 = thunk_FUN_041ca87a(uVar3,local_218,0x100);
      FUN_00414740(param_2,local_218,uVar1);
    }
    else {
      FUN_0064dd90(lVar2,param_2);
    }
  }
  FUN_00414ad0(param_1 + 0x28,*param_2);
  return param_2;
}

