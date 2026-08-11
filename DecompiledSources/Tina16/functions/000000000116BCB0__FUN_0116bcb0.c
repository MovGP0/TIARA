/* Ghidra address: 0116bcb0 */
/* Ghidra symbol: FUN_0116bcb0 */


void FUN_0116bcb0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x12);
  if ((puVar2 != (undefined4 *)0x0) && (*(longlong *)(param_1 + 0x14) != 0)) {
    iVar1 = param_1[10];
    if (iVar1 == 0) {
      FUN_01166e40(param_2,*puVar2,puVar2[1]);
      FUN_01166e60(param_2,*param_1 - param_1[0xb],
                   *(undefined4 *)(*(longlong *)(param_1 + 0x12) + 4));
      FUN_01166e60(param_2,*param_1 - param_1[0xb],param_1[1] - param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166e60(param_2,**(undefined4 **)(param_1 + 0x14),param_1[1] + param_1[9]);
      FUN_01166e60(param_2,*param_1 - param_1[0xb],param_1[1] + param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      FUN_01166e60(param_2,*param_1 + param_1[0xb],
                   *(undefined4 *)(*(longlong *)(param_1 + 0x1e) + 4));
      FUN_01166e60(param_2,*param_1 + param_1[0xb],param_1[1] - param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x20),(*(undefined4 **)(param_1 + 0x20))[1]);
      FUN_01166e60(param_2,**(undefined4 **)(param_1 + 0x20),param_1[1] + param_1[9]);
      FUN_01166e60(param_2,*param_1 + param_1[0xb],param_1[1] + param_1[9]);
    }
    else if (iVar1 == 1) {
      FUN_01166e40(param_2,*puVar2,puVar2[1]);
      FUN_01166e60(param_2,*param_1 - param_1[8],param_1[1] - param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166e60(param_2,*param_1 + param_1[8],param_1[1] - param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x12),(*(undefined4 **)(param_1 + 0x12))[1]);
      FUN_01166e60(param_2,*param_1 - param_1[8],param_1[1] + param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166e60(param_2,*param_1 + param_1[8],param_1[1] + param_1[0xb]);
    }
    else if (iVar1 == 2) {
      FUN_01166e40(param_2,*puVar2,puVar2[1]);
      FUN_01166e60(param_2,*param_1 + param_1[0xb],param_1[1] + param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166e60(param_2,*param_1 + param_1[0xb],param_1[1] - param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      FUN_01166e60(param_2,*param_1 - param_1[0xb],param_1[1] + param_1[9]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x20),(*(undefined4 **)(param_1 + 0x20))[1]);
      FUN_01166e60(param_2,*param_1 - param_1[0xb],param_1[1] - param_1[9]);
    }
    else if (iVar1 == 3) {
      FUN_01166e40(param_2,*puVar2,puVar2[1]);
      FUN_01166e60(param_2,*param_1,param_1[1] + param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166e60(param_2,*param_1,param_1[1] - param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      FUN_01166e60(param_2,*param_1,param_1[1] + param_1[0xb]);
      FUN_01166e40(param_2,**(undefined4 **)(param_1 + 0x20),(*(undefined4 **)(param_1 + 0x20))[1]);
      FUN_01166e60(param_2,*param_1,param_1[1] - param_1[0xb]);
    }
  }
  return;
}

