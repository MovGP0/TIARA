/* Ghidra address: 01cda1a0 */
/* Ghidra symbol: FUN_01cda1a0 */


void FUN_01cda1a0(longlong param_1,double param_2,double param_3,double param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_010ed740(&PTR_FUN_010ecd58,1);
  FUN_005fd6d0(*(undefined8 *)(lVar3 + 0x88),1);
  FUN_005fd4e0(*(undefined8 *)(lVar3 + 0x88),0x808080);
  FUN_005fd670(*(undefined8 *)(lVar3 + 0x88),0);
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),param_2 - param_4);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),param_3 - param_4);
  uVar4 = FUN_00498310(uVar1,uVar2);
  *(undefined8 *)(lVar3 + 0x68) = uVar4;
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),param_2 + param_4);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),param_3 + param_4);
  uVar4 = FUN_00498310(uVar1,uVar2);
  *(undefined8 *)(lVar3 + 0x70) = uVar4;
  uVar1 = FUN_01cdf670(*(undefined8 *)(param_1 + 0x78));
  FUN_005fd4e0(*(undefined8 *)(lVar3 + 0x88),uVar1);
  FUN_005fd670(*(undefined8 *)(lVar3 + 0x88),0);
  if (param_5 != '\0') {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
    uVar1 = FUN_01a90ee0(0xffffff);
    FUN_005fdab0(uVar4,uVar1);
    FUN_005fdcb0(uVar4,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
            (*(longlong **)(param_1 + 0x48),L"GridLine",lVar3);
  return;
}

