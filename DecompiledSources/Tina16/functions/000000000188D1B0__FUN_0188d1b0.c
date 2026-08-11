/* Ghidra address: 0188d1b0 */
/* Ghidra symbol: FUN_0188d1b0 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0188d1b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  int local_330 [5];
  int local_31c;
  undefined1 local_218 [520];
  
  local_340 = 0;
  local_348 = 0;
  local_338 = 0;
  local_330[1] = 0x114;
  thunk_FUN_03ed3ad2(local_330 + 1);
  if ((local_31c == 2) && (4 < (uint)local_330[2])) {
    local_330[0] = 0;
    uVar2 = thunk_FUN_04163be6(L"winspool.drv");
    if ((uVar2 != 0) && (uVar2 < 0x20)) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      pcVar3 = (code *)FUN_00427c10(uVar2,L"GetDefaultPrinterW");
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(0,local_330);
        if (0 < local_330[0]) {
          FUN_004169f0(&local_338,local_330[0]);
          uVar4 = FUN_00414de0(&local_338);
          (*pcVar3)(uVar4,local_330);
          FUN_00414ad0(param_2,local_338);
          goto LAB_0188d2f9;
        }
      }
    }
  }
  thunk_FUN_04180f49(L"windows",L"device",&DAT_0188d39a,local_218,0xff);
  FUN_00416830(&local_340,local_218,0x100);
  FUN_00416830(&local_348,local_218,0x100);
  iVar1 = FUN_004170c0(&LAB_0188d3a8,local_348,1);
  FUN_00416dc0(param_2,local_340,1,iVar1 + -1);
LAB_0188d2f9:
  FUN_00414560(&local_348,3);
  return param_2;
}

