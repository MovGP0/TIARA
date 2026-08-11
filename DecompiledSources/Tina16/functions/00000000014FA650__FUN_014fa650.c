/* Ghidra address: 014fa650 */
/* Ghidra symbol: FUN_014fa650 */


undefined1 FUN_014fa650(byte *param_1,byte param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_59;
  undefined8 local_50 [6];
  
  local_50[0] = 0;
  local_59 = 0;
  FUN_01d03160(*(undefined8 *)(param_1 + 0x550));
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_50);
  dVar1 = *(double *)PTR_DAT_02004660;
  dVar2 = *(double *)PTR_DAT_02001328;
  bVar4 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  if ((bVar4 == 1) && (param_2 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_00416db0(local_50[0],L"ODN1");
  }
  if (bVar4 != param_2) {
    FUN_014fad70(*(undefined8 *)(param_1 + 0x550),param_2);
    FUN_01aa1740(param_1);
    local_59 = 1;
    if (param_2 == 0) {
      param_1[0x5a8] = 3;
      FUN_01aac050(*(undefined8 *)PTR_DAT_020050e8,dVar2,*(undefined2 *)(param_1 + 0x41f8));
      FUN_01aac050(*(undefined8 *)PTR_DAT_020050e8,dVar2,*(undefined2 *)(param_1 + 0x4238));
    }
    else {
      cVar5 = FUN_01aac150(*(undefined8 *)PTR_DAT_020050e8,dVar2,param_1,1);
      if (cVar5 != '\0') {
        FUN_01aac620(*(undefined8 *)PTR_DAT_020050e8);
      }
      iVar6 = 1;
      for (uVar7 = (uint)*param_1; uVar7 != 0; uVar7 = uVar7 - 1) {
        param_1[(longlong)iVar6 + 0x587] =
             *(byte *)(*(longlong *)PTR_DAT_020050e8 + 0x14ad8 +
                      (ulonglong)*(ushort *)(param_1 + (longlong)iVar6 * 2 + 0x41f6));
        iVar6 = iVar6 + 1;
      }
      FUN_014f9ea0(param_1,dVar2 + dVar1);
    }
    param_1[0x561] = param_2;
  }
  FUN_00414480(local_50);
  return local_59;
}

