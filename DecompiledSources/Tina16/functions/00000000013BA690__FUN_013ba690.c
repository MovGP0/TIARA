/* Ghidra address: 013ba690 */
/* Ghidra symbol: FUN_013ba690 */


undefined1 FUN_013ba690(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_888 [32];
  wchar_t *local_868;
  undefined1 local_858 [256];
  undefined8 local_758;
  undefined1 *local_750;
  char local_4a1;
  longlong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  char local_478 [8];
  undefined8 local_470;
  undefined8 local_468 [4];
  int local_448;
  int local_444;
  int local_440 [2];
  int local_438;
  undefined1 local_433;
  undefined1 local_432 [1034];
  longlong local_28;
  undefined8 local_20;
  
  local_750 = auStack_888;
  local_758 = 0;
  local_488 = 0;
  local_490 = 0;
  local_498 = 0;
  local_868 = L"symbols_out.dat";
  FUN_00416cd0(&local_490,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013babdc);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_433 = 0;
  local_28 = 0;
  cVar2 = FUN_00440a20(local_490,1);
  if (cVar2 != '\0') {
    FUN_004b9f40(local_20,local_490);
    FUN_004b6dc0(local_20,0);
    FUN_004b84c0(local_20,param_1 + 0x10,4);
    FUN_004b84c0(local_20,local_440,4);
    local_438 = 0;
    iVar4 = local_440[0];
    if (-1 < local_440[0] + -1) {
      do {
        FUN_0040d200(local_478,0x30,0);
        FUN_004b84c0(local_20,&local_4a1,1);
        if (local_4a1 == '\v') {
          FUN_004b84c0(local_20,&local_444,4);
          local_28 = FUN_00409570((longlong)local_444);
          FUN_004b84c0(local_20,local_28);
        }
        else {
          FUN_004b84c0(local_20,local_478);
          if (local_478[0] == '\0') {
            FUN_004b84c0(local_20,&local_470,8);
            FUN_004b84c0(local_20,local_468);
            local_468[0] = 0;
          }
          else if (local_478[0] == '\x01') {
            FUN_004b84c0(local_20,&local_470,8);
            FUN_004b84c0(local_20,local_468);
          }
        }
        if (local_4a1 == '\v') {
          local_868 = (wchar_t *)CONCAT44(local_868._4_4_,local_444);
          FUN_013ba400(param_1,*(undefined8 *)(param_1 + 0x78));
        }
        else if ((local_4a1 == '\t') && (cVar2 = FUN_013ba330(param_1,local_438), cVar2 != '\0')) {
          local_448 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb8))
                                (*(longlong **)(param_1 + 0x38),local_488);
          if (-1 < local_448) {
            FUN_00b8fe00(&local_758,local_470,*PTR_DAT_02005310,0);
            FUN_004b5450(*(undefined8 *)(param_1 + 0x38),local_448);
          }
        }
        else if ((local_4a1 != '\n') && (cVar2 = FUN_013ba330(param_1,local_438), cVar2 != '\0')) {
          FUN_00416910(local_858,local_488);
          local_4a0 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0xc0),local_858);
          if (local_4a0 != 0) {
            FUN_013b3ec0(*(undefined8 *)(param_1 + 0xc0),local_4a0,local_478,
                         *(undefined1 *)(param_1 + 0x50));
          }
        }
        local_438 = local_438 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_433 = FUN_013b2e80(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_00410f20(local_20);
  if (local_28 != 0) {
    FUN_004095f0(local_28);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = FUN_00442620(local_432,*(undefined8 *)(param_1 + 0x20));
    FUN_015fcd60(lVar1,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00414480(&local_758);
  FUN_00414560(&local_498,3);
  return local_433;
}

