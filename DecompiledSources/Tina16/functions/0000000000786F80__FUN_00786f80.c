/* Ghidra address: 00786f80 */
/* Ghidra symbol: FUN_00786f80 */


undefined8 FUN_00786f80(int param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_60[0] = 0;
  local_40 = 0;
  local_7c = param_1;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = thunk_FUN_04186711(DAT_02012528,param_1,param_2,param_3);
  cVar1 = FUN_00781870();
  if (cVar1 != '\0') {
    if (local_7c == 3) {
      uVar3 = FUN_00781840();
      cVar1 = FUN_00779360(uVar3);
      if (cVar1 == '\0') {
        local_50 = *local_70;
        lStack_48 = local_70[1];
        FUN_00778a40(&local_40,local_78);
        FUN_0043e1a0(local_60,local_40);
        FUN_00414b50(&local_40,local_60[0]);
        local_30 = *(longlong *)(local_50 + 0x18);
        uVar4 = (ulonglong)*(int *)(local_50 + 0x30);
        local_38 = 0;
        cVar1 = FUN_00648630(local_78);
        if ((local_30 != 0) && (cVar1 == '\0')) {
          iVar2 = FUN_00416db0(local_40,L"#32770");
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_40,L"#32768");
            if (iVar2 != 0) {
              iVar2 = FUN_00416db0(local_40,L"tooltips_class32");
              if (iVar2 != 0) {
                cVar1 = FUN_00648630(local_30);
              }
            }
          }
        }
        if (cVar1 == '\0') {
          cVar1 = FUN_00790560(DAT_02012538,local_40);
          if (cVar1 != '\0') {
            cVar1 = FUN_0077eae0(&DAT_0075cd78,local_40);
            if (cVar1 != '\0') {
              if (local_30 != 0) {
                local_38 = thunk_FUN_04118143(local_30,0xfffffff0);
              }
              if ((uVar4 & 0x400) == 0x400) {
                FUN_00786f10(auStack_a8,local_78);
                thunk_FUN_0413e052(local_78,0x67d,0,0);
              }
              else if ((uVar4 & 0x80000000) == 0x80000000) {
                FUN_00786f10(auStack_a8,local_78);
              }
              else if ((uVar4 & 0x40000000) == 0x40000000) {
                cVar1 = FUN_00792690(DAT_02012540,local_30);
                if (cVar1 == '\0') {
                  FUN_00786f10(auStack_a8,local_78);
                }
                else {
                  FUN_00786e80(auStack_a8,local_78);
                }
              }
              else {
                FUN_00786f10(auStack_a8,local_78);
              }
            }
          }
        }
      }
    }
    if (local_7c == 4) {
      cVar1 = FUN_00792690(DAT_02012540,local_78);
      if (cVar1 != '\0') {
        uVar3 = FUN_00791910(DAT_02012540,local_78);
        FUN_00410f20(uVar3);
        FUN_00792330(DAT_02012540,local_78);
      }
    }
  }
  FUN_00414480(local_60);
  FUN_00414480(&local_40);
  return local_68;
}

