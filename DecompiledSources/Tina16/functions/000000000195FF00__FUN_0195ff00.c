/* Ghidra address: 0195ff00 */
/* Ghidra symbol: FUN_0195ff00 */


void FUN_0195ff00(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar7 = FUN_01953870(param_1);
  uVar1 = FUN_0195f670(param_1,0xb);
  *(undefined1 *)(lVar7 + 0xac) = uVar1;
  *(undefined1 *)(lVar7 + 0xab) = *(undefined1 *)(param_1 + 0x219);
  FUN_018d6e10(lVar7,*(undefined8 *)(param_1 + 0x78));
  uVar1 = FUN_0195f670(param_1,9);
  uVar5 = FUN_0195f670(param_1,1);
  uVar6 = FUN_0195f670(param_1,6);
  uVar2 = FUN_0195f670(param_1,8);
  uVar3 = FUN_0195f670(param_1,3);
  uVar4 = FUN_0195f670(param_1,10);
  FUN_018d6ff0(lVar7,uVar1,uVar5,uVar6,uVar2,uVar3,uVar4,*(undefined4 *)(param_1 + 0x318));
  FUN_018d70b0(lVar7,*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(param_1 + 0x2c0),
               *(undefined8 *)(param_1 + 0x300));
  if (*(char *)(param_1 + 0xc1) == '\0') {
    *(undefined8 *)(param_1 + 0x3c8) = 0x3ff0000000000000;
  }
  if ((((param_3 == 1.0) && (param_4 == 1.0)) && (param_5 == 0.0)) && (param_6 == 0.0)) {
    FUN_018d7050(lVar7,param_3,param_4,*(undefined8 *)(param_1 + 0x3c8),param_1 + 0x3b8,
                 param_1 + 0x3b8);
  }
  else {
    FUN_018d7050(lVar7,param_3,param_4,*(undefined8 *)(param_1 + 0x3c8),param_1 + 0x3b8,
                 param_1 + 0x37c);
  }
  uVar5 = FUN_0195f670(param_1,4);
  FUN_018d70c0(lVar7,*(undefined8 *)(param_1 + 0x308),uVar5,0);
  uVar5 = FUN_0195f670(param_1,4);
  uVar6 = FUN_0195f670(param_1,5);
  FUN_018d7500(lVar7,uVar5,uVar6);
  return;
}

