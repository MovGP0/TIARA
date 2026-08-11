/* Ghidra address: 00635840 */
/* Ghidra symbol: FUN_00635840 */


undefined4 FUN_00635840(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort local_2e;
  ushort local_2c;
  undefined2 local_2a [5];
  
  lVar2 = FUN_0041f930();
  if ((param_1 == *(int *)(lVar2 + 0x260)) &&
     (lVar2 = FUN_0041f930(), param_2 == *(int *)(lVar2 + 0x25c))) {
    lVar2 = FUN_0041f930();
    return *(undefined4 *)(lVar2 + 0x264);
  }
  if ((param_1 == -0xfffff1) && (param_2 == 0x13)) {
    uVar1 = 0xff000014;
  }
  else {
    uVar1 = FUN_005fbf20(param_1);
    FUN_00635080(uVar1,local_2a,&local_2c,&local_2e);
    if ((local_2e < 0xdd) ||
       (((int)((uint)local_2c - param_2) < 0 || (0xffff < (int)((uint)local_2c - param_2))))) {
      uVar1 = FUN_006357a0(uVar1,param_2,0);
    }
    else {
      uVar1 = FUN_00635590(local_2a[0],local_2c - (short)param_2,local_2e);
    }
    lVar2 = FUN_0041f930();
    *(int *)(lVar2 + 0x25c) = param_2;
    lVar2 = FUN_0041f930();
    *(int *)(lVar2 + 0x260) = param_1;
    lVar2 = FUN_0041f930();
    *(undefined4 *)(lVar2 + 0x264) = uVar1;
  }
  return uVar1;
}

