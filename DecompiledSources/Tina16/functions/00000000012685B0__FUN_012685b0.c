/* Ghidra address: 012685b0 */
/* Ghidra symbol: FUN_012685b0 */


char FUN_012685b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  char local_75;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  short *local_38;
  longlong local_30;
  
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = (short *)0x0;
  local_75 = '\0';
  local_74 = 0;
  while ((local_74 < *(int *)(param_2 + 0x10) && (local_75 == '\0'))) {
    plVar6 = (longlong *)FUN_00b94e60(param_2,local_74);
    if ((plVar6 != (longlong *)0x0) && (cVar2 = FUN_0198a580(plVar6), cVar2 == '\x04')) {
      sVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (sVar3 == 0x39) {
        if (((char)plVar6[0x34] == '\x01') && (*(longlong *)(plVar6[0x35] + 8) != 0)) {
          local_75 = FUN_012685b0(param_1,*(undefined8 *)(plVar6[0x35] + 8));
        }
        else if ((char)plVar6[0x34] == '\x02') {
          lVar1 = plVar6[0x35];
          iVar4 = (**(code **)(**(longlong **)(lVar1 + 0xb0) + 0x28))();
          iVar7 = 0;
          if (-1 < iVar4 + -1) {
            do {
              plVar6 = *(longlong **)(lVar1 + 0xb0);
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_40,iVar7);
              FUN_0043ea00(&local_38,local_40);
              if (local_38 != (short *)0x0) {
                if ((ushort)(*local_38 - 0x28U) < 0x20) {
                  bVar8 = (1 << ((byte)(*local_38 - 0x28U) & 0x1f) & 0x8004cU) != 0;
                }
                else {
                  bVar8 = false;
                }
                if (!bVar8) {
                  FUN_00450070(&local_48,local_38,&DAT_012688bc,&DAT_012688cc,1);
                  FUN_00414b50(&local_38,local_48);
                  FUN_00b90780(&local_50,local_38);
                  FUN_00414b50(&local_38,local_50);
                  FUN_0043e1a0(&local_58,L"LoopGainOut");
                  FUN_0043e1a0(&local_60,local_38);
                  iVar5 = FUN_004170c0(local_58,local_60,1);
                  local_75 = 0 < iVar5;
                }
              }
              iVar7 = iVar7 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          local_75 = '\0';
        }
      }
      else {
        FUN_00414b50(&local_30,plVar6[0x13]);
        if (local_30 != 0) {
          FUN_0043e1a0(&local_68,L"LoopGainOut");
          FUN_0043e1a0(&local_70,local_30);
          iVar4 = FUN_004170c0(local_68,local_70,1);
          local_75 = 0 < iVar4;
        }
      }
    }
    local_74 = local_74 + 1;
  }
  FUN_00414560(&local_70,9);
  return local_75;
}

