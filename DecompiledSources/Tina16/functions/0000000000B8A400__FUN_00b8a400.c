/* Ghidra address: 00b8a400 */
/* Ghidra symbol: FUN_00b8a400 */


undefined1 FUN_00b8a400(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_31 = 1;
  FUN_00416ba0(&local_58,*(undefined8 *)PTR_DAT_020049a0,L"\\tina.xls");
  cVar1 = FUN_00440a20(local_58,1);
  if (cVar1 == '\0') {
    local_31 = 0;
  }
  else {
    local_30 = FUN_00b68e40(&DAT_00b68668,1);
    *(undefined1 *)(local_30 + 0x20) = 0;
    *(undefined1 *)(local_30 + 0x21) = 0;
    *(undefined1 *)(local_30 + 0x22) = 0;
    *(undefined1 *)(local_30 + 0x23) = 0;
    *(undefined1 *)(local_30 + 0x25) = 0;
    local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b9f40(local_20,local_58);
    FUN_00b88af0(local_20,local_28,"blowfish","N=g4W9%x2?-(A+\\q#K1}");
    FUN_00b69290(local_30,local_28);
    local_68 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(local_30 + 8) + 8),0);
    iVar2 = FUN_00b4e330();
    local_5c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_40 = FUN_00b4fc70(*(undefined8 *)(local_68 + 0x10),local_5c);
        if (*(short *)(local_40 + 0x48) != 0) {
          if (*(ushort *)(local_40 + 0x4a) == 0) {
            FUN_00b4f780(local_40,&local_88);
            FUN_004168b0(&local_48,local_88);
          }
          else if (*(ushort *)(local_40 + 0x4a) == param_2) {
            FUN_00b4f780(local_40,&local_90);
            FUN_004168b0(&local_50,local_90);
            local_a8 = local_50;
            FUN_00416cd0(&local_98,3,local_48,&LAB_00b8a7c0);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))
                      (*(longlong **)(param_1 + 0x18),local_98);
          }
        }
        local_5c = local_5c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
  }
  FUN_00414480(&local_98);
  FUN_004145c0(&local_90,2);
  FUN_00414560(&local_58,3);
  return local_31;
}

