/* Ghidra address: 014fa850 */
/* Ghidra symbol: FUN_014fa850 */


undefined1 FUN_014fa850(byte *param_1,byte param_2)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_79;
  undefined1 local_70 [8];
  int local_68;
  int local_64;
  undefined1 local_60 [4];
  int local_5c;
  int local_54;
  undefined8 local_50 [6];
  
  local_50[0] = 0;
  local_79 = 0;
  FUN_01d03160(*(undefined8 *)(param_1 + 0x550));
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_50);
  dVar1 = *(double *)PTR_DAT_02004660;
  dVar2 = *(double *)PTR_DAT_02001328;
  bVar3 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  if (bVar3 != param_2) {
    FUN_014fad70(*(undefined8 *)(param_1 + 0x550),param_2);
    local_79 = 1;
    cVar4 = FUN_01aac150(*(undefined8 *)PTR_DAT_020050e8,dVar2,param_1,1);
    if (cVar4 != '\0') {
      FUN_01aac620(*(undefined8 *)PTR_DAT_020050e8);
    }
    iVar5 = 1;
    for (uVar6 = (uint)*param_1; uVar6 != 0; uVar6 = uVar6 - 1) {
      param_1[(longlong)iVar5 + 0x587] =
           *(byte *)(*(longlong *)PTR_DAT_020050e8 + 0x14ad8 +
                    (ulonglong)*(ushort *)(param_1 + (longlong)iVar5 * 2 + 0x41f6));
      iVar5 = iVar5 + 1;
    }
    FUN_014f9d60(local_60,param_2);
    FUN_014f9dc0(local_70,param_2);
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_5c * 2 + 0x41f6));
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_54 * 2 + 0x4236));
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_64 * 2 + 0x4236));
    FUN_014f9f20(param_1,dVar2 + dVar1);
    FUN_014f9d60(local_60,param_2);
    FUN_014f9dc0(local_70,param_2);
    param_1[(longlong)local_68 * 0x788 + -0x1e0] = 3;
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_5c * 2 + 0x41f6));
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_54 * 2 + 0x4236));
    FUN_01aac0d0(*(undefined8 *)PTR_DAT_020050e8,dVar2,
                 *(undefined2 *)(param_1 + (longlong)local_64 * 2 + 0x4236));
    param_1[0x561] = param_2;
  }
  FUN_00414480(local_50);
  return local_79;
}

