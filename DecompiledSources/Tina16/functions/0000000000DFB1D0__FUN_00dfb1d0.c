/* Ghidra address: 00dfb1d0 */
/* Ghidra symbol: FUN_00dfb1d0 */


void FUN_00dfb1d0(longlong param_1,undefined1 param_2,ulonglong param_3,char param_4,byte param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  int local_68;
  int local_64;
  
  uVar5 = FUN_00b92140(0);
  if ((param_5 & *(byte *)(*(longlong *)(param_1 + 0x110) + 9)) == 0) {
    FUN_017c5870(*(undefined8 *)(param_1 + 0xd8));
    dVar6 = (double)FUN_00b92140(uVar5);
    *(double *)PTR_DAT_02003e80 = dVar6 + *(double *)PTR_DAT_02003e80;
    if (param_4 != '\0') {
      uVar7 = FUN_00b92140(0);
      local_68 = 1;
      while( true ) {
        if (*(int *)(param_1 + 0x2d8) < local_68) break;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_68 * 8);
        if (*(char *)(*(longlong *)(param_1 + 0x110) + 10) != '\0') {
          FUN_01662840(*(longlong *)(param_1 + 0x110),lVar2);
        }
        for (local_64 = 1; local_64 <= (int)(uint)*(byte *)(lVar2 + 4); local_64 = local_64 + 1) {
          bVar1 = **(byte **)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)local_64 * 8);
          uVar4 = (ulonglong)bVar1;
          if ((*(longlong *)(&DAT_0202dd90 + uVar4 * 8) == 0) || (*(char *)(param_1 + 0xe0) == '\0')
             ) {
            (**(code **)(&DAT_0202dba0 + uVar4 * 8))(lVar2,param_1,param_2,local_64,param_3);
            if (*(char *)(*(longlong *)(param_1 + 0x110) + 10) != '\0') {
              FUN_0165ddf0(*(longlong *)(param_1 + 0x110),&DAT_0202dba0 + uVar4 * 8,2,lVar2,local_64
                          );
            }
          }
          else {
            *(undefined1 *)(*(longlong *)(param_1 + 0x110) + 0xb) = 0;
            (**(code **)(&DAT_0202dd90 + uVar4 * 8))(lVar2,param_1,param_2,local_64,param_3);
            lVar3 = *(longlong *)(param_1 + 0x110);
            if ((*(char *)(lVar3 + 10) != '\0') && (*(char *)(lVar3 + 0xb) == '\0')) {
              FUN_0165ddf0(lVar3,&DAT_0202dd90 + (ulonglong)bVar1 * 8,2,lVar2,local_64);
            }
          }
        }
        if ((*(char *)(lVar2 + 0x116) != '\0') && (*(char *)(param_1 + 0xe0) != '\0')) {
          uVar4 = param_3;
          (**(code **)(lVar2 + 200))(param_1,lVar2,*(undefined8 *)(lVar2 + 0x60),param_2,param_3);
          if (*(char *)(*(longlong *)(param_1 + 0x110) + 10) != '\0') {
            FUN_0165ddf0(*(longlong *)(param_1 + 0x110),lVar2 + 200,3,lVar2,
                         uVar4 & 0xffffffff00000000);
          }
        }
        local_68 = local_68 + 1;
      }
      dVar6 = (double)FUN_00b92140(uVar7);
      *(double *)PTR_DAT_02004498 = dVar6 + *(double *)PTR_DAT_02004498;
    }
  }
  uVar7 = FUN_00b92140(0);
  if (*(char *)(param_1 + 0xe0) == '\x02') {
    FUN_00dfab70(param_1);
  }
  else {
    FUN_00dfa910(param_1);
  }
  if (*(char *)(param_1 + 0xe0) == '\x02') {
    FUN_00dfb0b0(param_1);
  }
  else {
    FUN_00dfadf0(param_1);
  }
  if (*(char *)(param_1 + 0xe0) == '\x02') {
    FUN_00dfa8b0(param_1);
  }
  else if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_00dfa740(param_1);
  }
  dVar6 = (double)FUN_00b92140(uVar7);
  *(double *)PTR_DAT_020020c0 = dVar6 + *(double *)PTR_DAT_020020c0;
  dVar6 = (double)FUN_00b92140(uVar5);
  *(double *)PTR_DAT_020031e0 = dVar6 + *(double *)PTR_DAT_020031e0;
  return;
}

