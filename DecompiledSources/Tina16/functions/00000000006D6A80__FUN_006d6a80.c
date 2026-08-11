/* Ghidra address: 006d6a80 */
/* Ghidra symbol: FUN_006d6a80 */


void FUN_006d6a80(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    if (*(longlong *)(param_1 + 0x498) == 0) {
      FUN_0041ddd0(local_20,PTR_PTR_02005128);
      uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
      FUN_004134c0(uVar2);
    }
    else {
      uVar2 = FUN_0065b870(*(longlong *)(param_1 + 0x498));
      iVar1 = FUN_006d6630(param_1);
      thunk_FUN_041b2403(uVar2,0x1333,(longlong)iVar1,param_2);
    }
  }
  *(undefined1 *)(param_1 + 0x4a2) = param_2;
  FUN_00414480(local_20);
  return;
}

