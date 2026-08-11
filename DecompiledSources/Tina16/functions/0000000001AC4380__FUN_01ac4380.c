/* Ghidra address: 01ac4380 */
/* Ghidra symbol: FUN_01ac4380 */


void FUN_01ac4380(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 local_2c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,param_1 + 0x90,1);
    FUN_01d30f00(param_2,local_2c,4);
    uVar2 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    FUN_01d30f00(param_2,local_2c,4);
    uVar2 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    FUN_01d30f00(param_2,local_2c,4);
    plVar3 = (longlong *)FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong **)(param_1 + 0x58) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x100))(plVar3,param_1);
    }
    FUN_01d30f00(param_2,param_1 + 0x60,4);
    FUN_01d30f00(param_2,param_1 + 100,4);
    FUN_01d30f00(param_2,param_1 + 0x68,4);
    FUN_01d30f00(param_2,param_1 + 0x70,8);
    FUN_01d30f00(param_2,param_1 + 0x78,8);
    FUN_01d30f00(param_2,param_1 + 0x80,8);
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x88));
    FUN_01d30f00(param_2,param_1 + 0x91,1);
    if (*(char *)(param_1 + 0x90) == '\0') {
      *(longlong *)(*(longlong *)(param_1 + 0x98) + 0xf8) = param_1;
    }
    else {
      *(longlong *)(*(longlong *)(param_1 + 0x98) + 0xf0) = param_1;
    }
  }
  return;
}

