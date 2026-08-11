/* Ghidra address: 017b32d0 */
/* Ghidra symbol: FUN_017b32d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b32d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  if (param_2 != 0) {
    lVar2 = FUN_017ae270(&DAT_017ad878,1,param_2);
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x24c);
    }
    else {
      uVar1 = 0xff;
    }
    if (*(char *)(param_1 + 0x248) == '\0') {
      uVar3 = 300;
    }
    else {
      uVar3 = 700;
    }
    FUN_004169a0(local_30,param_1 + 0x140);
    FUN_004169a0(&local_38,param_1 + 0x40);
    FUN_017aef30(lVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0,0,0,
                 *(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x240),uVar1,
                 *(undefined4 *)(lVar2 + 0x7c),uVar3,*(undefined1 *)(param_1 + 0x249),
                 *(undefined1 *)(param_1 + 0x20),local_30[0],local_38);
    FUN_00410f20(lVar2);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),4);
    uVar1 = FUN_0040c770((double)_DAT_021100bc / (double)DAT_01fa23a8);
    *(undefined4 *)(param_1 + 0x250) = uVar1;
    uVar1 = FUN_0040c770((double)_DAT_021100c0 / (double)DAT_01fa23a8);
    *(undefined4 *)(param_1 + 0x254) = uVar1;
  }
  FUN_00414560(&local_38,2);
  return;
}

