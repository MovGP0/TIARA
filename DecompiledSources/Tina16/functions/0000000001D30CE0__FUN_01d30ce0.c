/* Ghidra address: 01d30ce0 */
/* Ghidra symbol: FUN_01d30ce0 */


void FUN_01d30ce0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_30 [16];
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_01d310e0(param_1,local_30,0xff,0,0);
    iVar2 = FUN_01d31a40(param_1);
    if (iVar2 == 0) {
      FUN_01d31100(param_1,local_30);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30),0);
      FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),local_30,8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = FUN_004b6da0(uVar1);
      FUN_004b6e40(uVar1,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xb;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

