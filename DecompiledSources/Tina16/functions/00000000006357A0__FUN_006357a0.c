/* Ghidra address: 006357a0 */
/* Ghidra symbol: FUN_006357a0 */


undefined4 FUN_006357a0(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined2 local_2e;
  short local_2c;
  undefined2 local_2a [5];
  
  lVar2 = FUN_0041f930();
  if ((param_1 == *(int *)(lVar2 + 0x274)) &&
     (lVar2 = FUN_0041f930(), param_2 == *(int *)(lVar2 + 0x278))) {
    lVar2 = FUN_0041f930();
    return *(undefined4 *)(lVar2 + 0x27c);
  }
  uVar1 = FUN_005fbf20(param_1);
  FUN_00635080(uVar1,local_2a,&local_2c,&local_2e);
  uVar1 = FUN_00635590(local_2a[0],local_2c + (short)param_2,local_2e);
  lVar2 = FUN_0041f930();
  *(int *)(lVar2 + 0x274) = param_1;
  lVar2 = FUN_0041f930();
  *(int *)(lVar2 + 0x278) = param_2;
  lVar2 = FUN_0041f930();
  *(undefined4 *)(lVar2 + 0x27c) = uVar1;
  return uVar1;
}

