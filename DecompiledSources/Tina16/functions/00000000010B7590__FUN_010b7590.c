/* Ghidra address: 010b7590 */
/* Ghidra symbol: FUN_010b7590 */


longlong FUN_010b7590(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar3 = FUN_00410920(param_1,local_res10);
  if (lVar3 != -1) {
    FUN_01cf04c0(lVar3,0);
    *(undefined8 *)(lVar3 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(lVar3 + 0x60) = 0x3ff0000000000000;
    *(undefined4 *)(lVar3 + 0x68) = 0;
    *(undefined1 *)(lVar3 + 0x80) = 1;
    *(undefined4 *)(lVar3 + 0x6c) = 0xffffff;
    *(undefined1 *)(lVar3 + 0x82) = 0;
    *(undefined1 *)(lVar3 + 0x81) = 0;
    *(undefined4 *)(lVar3 + 0xc) = param_3;
    *(undefined4 *)(lVar3 + 0x10) = param_4;
    param_1 = lVar3;
    if (param_5 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar3 + 0x28) = 8;
      *(undefined4 *)(lVar3 + 0x2c) = 100;
      *(undefined4 *)(lVar3 + 0x30) = 100;
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0x28) = *param_5;
      *(undefined8 *)(lVar3 + 0x30) = param_5[1];
      *(undefined8 *)(lVar3 + 0x38) = param_5[2];
      uVar4 = thunk_FUN_04130c1a(*(undefined8 *)(lVar3 + 0x38),0);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      if (*(int *)(lVar3 + 0x2c) == 0) {
        *(undefined4 *)(lVar3 + 0x2c) = 5000;
      }
      if (*(int *)(lVar3 + 0x30) == 0) {
        *(undefined4 *)(lVar3 + 0x30) = 4000;
      }
      if (((*(int *)(lVar3 + 0x28) != 8) && (*(int *)(lVar3 + 0x28) == 7)) &&
         (*(int *)(lVar3 + 0x2c) < 0)) {
        iVar1 = *(int *)(lVar3 + 0x30);
        *(undefined4 *)(lVar3 + 0x30) = 100;
        uVar2 = FUN_0040c770(((double)*(int *)(lVar3 + 0x2c) / (double)iVar1) * 100.0);
        *(undefined4 *)(lVar3 + 0x2c) = uVar2;
      }
    }
  }
  return param_1;
}

