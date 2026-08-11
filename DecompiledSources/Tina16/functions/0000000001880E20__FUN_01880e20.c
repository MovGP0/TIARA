/* Ghidra address: 01880e20 */
/* Ghidra symbol: FUN_01880e20 */


void FUN_01880e20(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02001250);
    iVar2 = FUN_0043e6d0(param_2,local_20[0]);
    if (iVar2 != 0) {
      uVar1 = FUN_007dca30(param_2);
    }
  }
  FUN_0187fee0(param_1,uVar1);
  FUN_00414480(local_20);
  return;
}

