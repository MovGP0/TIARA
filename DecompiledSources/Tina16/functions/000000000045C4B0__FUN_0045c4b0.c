/* Ghidra address: 0045c4b0 */
/* Ghidra symbol: FUN_0045c4b0 */


undefined8 FUN_0045c4b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_58 [40];
  undefined8 local_30 [2];
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + -8);
  }
  local_30[0] = FUN_0041e250(&DAT_004045d8,lVar1 + 1);
  uVar2 = FUN_0041e0c0(local_30);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + -8);
  }
  FUN_00409a70(param_2,uVar2,uVar3);
  FUN_0045bde0(local_58,local_30);
  FUN_0045bf40(param_1,local_58);
  return local_30[0];
}

