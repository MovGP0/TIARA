/* Ghidra address: 005346e0 */
/* Ghidra symbol: FUN_005346e0 */


void FUN_005346e0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_1c [4];
  
  uVar1 = FUN_00534680();
  lVar3 = FUN_00427f60(uVar1,0,param_3);
  *param_2 = lVar3;
  if (lVar3 == 0) {
    FUN_00451a00();
  }
  iVar2 = thunk_FUN_040fd79b(*param_2,param_3,0x40,local_1c);
  if (iVar2 == 0) {
    FUN_00451a00();
  }
  return;
}

