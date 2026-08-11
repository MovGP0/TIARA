/* Ghidra address: 01aaaaf0 */
/* Ghidra symbol: FUN_01aaaaf0 */


longlong FUN_01aaaaf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01aa8eb0(lVar1,0);
    *(undefined2 *)(lVar1 + 0x13b30) = 0;
    *(undefined1 *)(lVar1 + 0x198fa) = 0;
    *(undefined1 *)(lVar1 + 0x13a2a) = 0;
    uVar2 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
    *(undefined8 *)(lVar1 + 0x13a38) = uVar2;
    uVar2 = FUN_01d34560(&PTR_FUN_01caf0e0,1,5,5);
    *(undefined8 *)(lVar1 + 0x13a30) = uVar2;
    *(undefined4 *)(lVar1 + 0x19c1c) = 0;
    uVar2 = FUN_01cafe10(&PTR_FUN_01caf5b8,1);
    *(undefined8 *)(lVar1 + 0x19c20) = uVar2;
    DAT_02110a54 = 0;
    param_1 = lVar1;
  }
  return param_1;
}

