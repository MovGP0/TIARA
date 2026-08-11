/* Ghidra address: 01cda090 */
/* Ghidra symbol: FUN_01cda090 */


void FUN_01cda090(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_01d2b190(&PTR_FUN_01d29210,1);
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),param_3);
  FUN_01d2c460(lVar3,uVar1,uVar2);
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),param_4);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),param_5);
  FUN_01d2c460(lVar3,uVar1,uVar2);
  uVar1 = FUN_01cdf670(*(undefined8 *)(param_1 + 0x78));
  FUN_005fd4e0(*(undefined8 *)(lVar3 + 0x60),uVar1);
  FUN_005fd670(*(undefined8 *)(lVar3 + 0x60),2);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
            (*(longlong **)(param_1 + 0x48),L"GridLine",lVar3);
  return;
}

