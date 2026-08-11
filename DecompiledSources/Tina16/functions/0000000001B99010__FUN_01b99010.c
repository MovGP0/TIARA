/* Ghidra address: 01b99010 */
/* Ghidra symbol: FUN_01b99010 */


void FUN_01b99010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar1 != 0) {
    uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    uVar4 = FUN_006e2230(*(undefined8 *)(param_1 + 0x7e8),param_4,param_5);
    uVar3 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x7e8),param_4,param_5);
    FUN_01b98c30(param_1,uVar2,uVar3,(uVar4 & 0x100) != 0);
  }
  return;
}

