/* Ghidra address: 0154c700 */
/* Ghidra symbol: FUN_0154c700 */


void FUN_0154c700(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x9d9) = 0;
  lVar2 = FUN_00e14660(&DAT_00e13408,1);
  *(longlong *)(param_1 + 0x9c8) = lVar2;
  *(undefined1 *)(lVar2 + 0x20) = *(undefined1 *)(param_1 + 0x838);
  FUN_00e14e70(lVar2,*(undefined8 *)(param_1 + 0x748));
  FUN_00e14a00(*(undefined8 *)(param_1 + 0x9c8));
  if (*(char *)(param_1 + 0x958) != '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x9c8) + 0x18) = *(undefined8 *)(param_1 + 0x8d8);
  }
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x910) = uVar3;
  FUN_00416cd0(local_20,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_0154c8a4,L"VHDL\\Packages",
               L"\\components.txt");
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 == '\0') {
    FUN_00416ba0(local_30,L"File not found: ",local_20[0]);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30[0]);
    FUN_004134c0(uVar3);
  }
  cVar1 = FUN_015f6460(local_20[0]);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x910) + 0xd8))
              (*(longlong **)(param_1 + 0x910),local_20[0]);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

