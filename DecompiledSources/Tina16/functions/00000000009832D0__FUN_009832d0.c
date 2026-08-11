/* Ghidra address: 009832d0 */
/* Ghidra symbol: FUN_009832d0 */


longlong FUN_009832d0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  puVar1 = auStack_48;
  if (param_2 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Input source not specified.");
    FUN_004134c0(uVar3);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (param_1[0xf] == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"DOM implementation not specified.");
    FUN_004134c0(uVar3);
  }
  if (*(char *)(param_2 + 0x121) == '\0') {
    if (*(byte *)(param_2 + 0x120) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
               (*(byte *)(param_2 + 0x120) & 0x1f) & 0xdU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) goto LAB_00983397;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,0x4d);
  uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
  FUN_004134c0(uVar3);
LAB_00983397:
  cVar2 = FUN_00948910(*(undefined8 *)(param_2 + 0x138));
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,0x9d);
    uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar3);
  }
  local_10 = FUN_00956590(&PTR_FUN_0090eed0,1,param_1[0xf]);
  FUN_00414b90(local_10 + 0x98,*(undefined8 *)(param_2 + 0x110));
  *(longlong *)(param_1[0x12] + 0x80) = local_10;
  cVar2 = (**(code **)(*(longlong *)param_1[0x13] + 0x138))((longlong *)param_1[0x13],param_2);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar3);
  }
  return local_10;
}

