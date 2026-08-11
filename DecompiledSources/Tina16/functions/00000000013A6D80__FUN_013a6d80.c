/* Ghidra address: 013a6d80 */
/* Ghidra symbol: FUN_013a6d80 */


undefined1 FUN_013a6d80(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  undefined4 *local_b0;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  int local_6c [16];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_a1 = 1;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_00414480(param_2);
  cVar1 = FUN_01b22620(local_c0,L"Exiting due to",&local_2c,0);
  if (cVar1 != '\0') {
    (**(code **)(*local_c0 + 0x18))(local_c0,local_20,local_2c);
    FUN_013a6cb0(auStack_e8,local_80);
    FUN_0043e1a0(local_20,local_80[0]);
    iVar2 = FUN_004170c0(L"error",local_20[0],1);
    if (0 < iVar2) {
      local_a1 = 0;
      cVar1 = FUN_01b22620(local_c0,L"%Error",&local_2c,0);
      if (cVar1 != '\0') {
        (**(code **)(*local_c0 + 0x18))(local_c0,&local_88,local_2c);
        FUN_00414ad0(local_b8,local_88);
        FUN_0040d200(local_6c,0x40,0);
        iVar3 = 0;
        iVar2 = 0;
        if (*local_b8 != 0) {
          iVar2 = *(int *)(*local_b8 + -4);
        }
        local_2c = 1;
        if (0 < iVar2) {
          do {
            if ((*(short *)(*local_b8 + -2 + (longlong)local_2c * 2) == 0x3a) && (iVar3 < 0x10)) {
              local_6c[iVar3] = local_2c;
              iVar3 = iVar3 + 1;
            }
            local_2c = local_2c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00416dc0(&local_90,*local_b8,local_6c[1] + 1,(local_6c[2] - local_6c[1]) + -1);
        FUN_0043ea00(&local_28,local_90);
        uVar4 = FUN_0043fc00(local_28);
        *local_b0 = uVar4;
        iVar2 = 0;
        if (*local_b8 != 0) {
          iVar2 = *(int *)(*local_b8 + -4);
        }
        FUN_00416dc0(&local_a0,*local_b8,local_6c[3] + 1,iVar2 - local_6c[3]);
        FUN_0043ea00(&local_98,local_a0);
        FUN_00414ad0(local_b8,local_98);
      }
    }
  }
  FUN_00414560(&local_a0,5);
  FUN_00414560(&local_28,2);
  return local_a1;
}

