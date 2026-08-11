/* Ghidra address: 0162efd0 */
/* Ghidra symbol: FUN_0162efd0 */


void FUN_0162efd0(undefined8 param_1,undefined8 param_2,short param_3,longlong param_4)

{
  undefined8 uVar1;
  double dVar2;
  double unaff_XMM6_Qa;
  
  dVar2 = (double)FUN_01614c70(param_2);
  uVar1 = FUN_0162e870(param_1,*(undefined8 *)(param_4 + 0x58));
  if (param_3 == 0x163) {
    dVar2 = -dVar2;
  }
  else if (param_3 != 0x164) {
    if (param_3 == 0x16b) {
      if (dVar2 < 1.0) {
        dVar2 = 1.0;
      }
      else {
        dVar2 = 0.0;
      }
    }
    else {
      FUN_01613110(L"Op invalid");
      dVar2 = unaff_XMM6_Qa;
    }
  }
  FUN_01615b20(uVar1,dVar2);
  FUN_0162ea10(5,uVar1,param_2);
  return;
}

