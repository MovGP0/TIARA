/* Ghidra address: 014fa4b0 */
/* Ghidra symbol: FUN_014fa4b0 */


undefined1 FUN_014fa4b0(byte *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
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
  cVar5 = FUN_014f9c20(*(undefined8 *)(param_1 + 0x550));
  if (bVar4 != param_1[0x561] || cVar5 != '\0') {
    local_59 = 1;
    FUN_01aacbb0(*(undefined8 *)PTR_DAT_020050e8,0,dVar2 + dVar1,1);
    uVar3 = *(undefined8 *)PTR_DAT_020050e8;
    if (bVar4 == 0) {
      param_1[0x5a8] = 3;
      FUN_01aac050(uVar3,dVar2,*(undefined2 *)(param_1 + 0x41f8));
      FUN_01aac050(uVar3,dVar2,*(undefined2 *)(param_1 + 0x4238));
    }
    else {
      iVar6 = 1;
      for (uVar7 = (uint)*param_1; uVar7 != 0; uVar7 = uVar7 - 1) {
        param_1[(longlong)iVar6 + 0x587] =
             *(byte *)(*(longlong *)PTR_DAT_020050e8 + 0x14ad8 +
                      (ulonglong)*(ushort *)(param_1 + (longlong)iVar6 * 2 + 0x41f6));
        iVar6 = iVar6 + 1;
      }
      FUN_014f9ea0(param_1,dVar2 + dVar1);
    }
    param_1[0x561] = bVar4;
  }
  FUN_00414480(local_50);
  return local_59;
}

