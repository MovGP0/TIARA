/* Ghidra address: 014af1b0 */
/* Ghidra symbol: FUN_014af1b0 */


longlong FUN_014af1b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_res8;
  longlong local_res10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_a0;
  int local_90;
  undefined1 local_8c [52];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [48];
  
  local_a0 = auStack_d8;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00417580(local_8c,&DAT_01d2e6d8);
  local_58 = 0;
  if (local_res8 == 0) {
    FUN_00b047e0(0xfffffffd);
  }
  else {
    DAT_0210eae8 = 0;
    local_50 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0);
    local_b8 = 0;
    local_48 = FUN_01d30b30(&DAT_01d2e8e8,1,local_50,0x40);
    if ((local_48 == 0) || (iVar2 = FUN_01d31a40(local_48), iVar2 != 0)) {
      if (*(int *)PTR_DAT_02004810 == 0x1001) {
        FUN_00b047e0(0xfffffffd);
      }
      else {
        FUN_00b047e0(*(undefined4 *)PTR_DAT_02004810);
      }
    }
    else {
      if (local_res10 != 0) {
        *(undefined1 *)(local_res10 + 0x490) = 1;
      }
      FUN_01d31aa0(local_48,local_res10);
      FUN_01d317c0(local_48,local_8c);
      cVar1 = FUN_014af0c0(auStack_d8,local_8c);
      if (cVar1 == '\0') {
        FUN_00b047e0(0xfffffffd);
      }
      else {
        FUN_01d32d00(local_40,&PTR_FUN_01d306d0,1000,500);
        FUN_01d32d70(local_40,0x200,FUN_014a80c0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x105,FUN_014a8140,FUN_014a80b0);
        FUN_01d32d70(local_40,0x104,FUN_014a81b0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x106,FUN_014a81b0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x103,FUN_014a81b0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x107,FUN_014a8270,FUN_014a80b0);
        FUN_01d32d70(local_40,0x101,FUN_014a85f0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x102,FUN_014a85f0,FUN_014a80b0);
        FUN_01d32d70(local_40,0x100,FUN_014a8560,FUN_014a80b0);
        FUN_01d32d70(local_40,0x108,FUN_014a8380,FUN_014a80b0);
        FUN_01d32d70(local_40,0x109,FUN_014a8470,FUN_014a80b0);
        iVar2 = (int)*(short *)PTR_DAT_02004a38;
        local_90 = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_01d32d70(local_40,*(short *)(*(longlong *)PTR_DAT_020020b8 + (longlong)local_90 * 2)
                                  + 0x201,FUN_014a8660,FUN_014a80b0);
            local_90 = local_90 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_01d32e90(local_40,&local_48);
        FUN_01d32d50(local_40);
        iVar2 = FUN_01d31a40(local_48);
        if (iVar2 == 0) {
          if (local_res10 == 0) {
            local_res10 = *(longlong *)(local_48 + 0x40);
          }
          FUN_012beeb0(*(undefined8 *)(local_res10 + 0xd8));
          local_58 = local_res10;
        }
      }
      iVar2 = FUN_01d31a40(local_48);
      if (iVar2 != 0) {
        uVar3 = FUN_01d31a40(local_48);
        FUN_00b047e0(uVar3);
      }
    }
    FUN_00410f20(local_48);
    FUN_00410f20(local_50);
  }
  FUN_00417740(local_8c,&DAT_01d2e6d8);
  FUN_00414480(&local_res8);
  return local_58;
}

