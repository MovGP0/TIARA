/* Ghidra address: 008084b0 */
/* Ghidra symbol: FUN_008084b0 */


undefined8 FUN_008084b0(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_518 [32];
  undefined8 *local_4f8;
  undefined4 *local_4f0;
  int local_4dc;
  undefined1 *local_4d8;
  longlong *local_4d0;
  undefined1 local_4c8;
  undefined1 *local_4c0;
  longlong *local_4b8;
  undefined1 local_4a8 [128];
  undefined8 local_428 [64];
  longlong local_228 [64];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_4c0 = auStack_518;
  local_4d8 = (undefined1 *)0x0;
  puVar2 = auStack_518;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    FUN_00414480(param_1 + 0x88);
    local_1c = thunk_FUN_03bec9ec(0x40,local_228);
    local_4dc = local_1c + -1;
    local_20 = 0;
    if (-1 < local_4dc) {
      local_4b8 = local_228;
      local_4dc = local_1c;
      do {
        cVar3 = FUN_006651c0(*local_4b8);
        if (cVar3 != '\0') {
          local_4d0 = local_4b8;
          local_4c8 = 0x10;
          uVar5 = FUN_00442dd0(local_4a8,
                               L"System\\CurrentControlSet\\Control\\Keyboard Layouts\\%.8x",
                               &local_4d0,0);
          local_4f8 = &local_10;
          iVar4 = thunk_FUN_03ecc02e(0xffffffff80000002,uVar5,0);
          if (iVar4 == 0) {
            local_24 = 0x200;
            local_4f8 = local_428;
            local_4f0 = &local_24;
            iVar4 = thunk_FUN_0419d678(local_10,L"layout text",0);
            if (iVar4 == 0) {
              FUN_00416830(&local_4d8,local_428,0x100);
              (**(code **)(**(longlong **)(param_1 + 0x80) + 0x80))
                        (*(longlong **)(param_1 + 0x80),local_4d8,*local_4b8);
              if (*local_4b8 == *(longlong *)(param_1 + 0x90)) {
                FUN_00416830(param_1 + 0x88,local_428,0x100);
              }
            }
            thunk_FUN_0418fb4b(local_10);
          }
        }
        local_4b8 = local_4b8 + 1;
        local_4dc = local_4dc + -1;
      } while (local_4dc != 0);
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(lVar1 + 0x49) = 0;
    FUN_004b67b0(lVar1,1);
    puVar2 = local_4c0;
  }
  local_4c0 = puVar2;
  local_18 = *(undefined8 *)(param_1 + 0x80);
  FUN_00414480(&local_4d8);
  return local_18;
}

