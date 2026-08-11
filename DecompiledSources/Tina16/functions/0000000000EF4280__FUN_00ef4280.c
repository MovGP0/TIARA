/* Ghidra address: 00ef4280 */
/* Ghidra symbol: FUN_00ef4280 */


void FUN_00ef4280(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((*(char *)(param_1 + 0x92) != '\0') && (*(char *)(param_1 + 0x94) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x94);
    if (cVar1 < '\f') {
      if (cVar1 == '\v') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_68,0x10b);
        FUN_016fd940(local_68);
      }
      else if (cVar1 < '\a') {
        if (cVar1 == '\x06') {
          uVar2 = FUN_00b89270();
          FUN_00b8e520(uVar2,&local_38,0x103);
          FUN_016fd940(local_38);
        }
        else if (cVar1 < '\x04') {
          if (cVar1 == '\x03') {
            uVar2 = FUN_00b89270();
            FUN_00b8e520(uVar2,&local_20,0x801);
            FUN_016fd940(local_20);
          }
          else if (cVar1 == '\x01') {
            uVar2 = FUN_00b89270();
            FUN_00b8e520(uVar2,&local_10,0x800);
            FUN_016fd940(local_10);
          }
          else if (cVar1 == '\x02') {
            uVar2 = FUN_00b89270();
            FUN_00b8e520(uVar2,&local_18,0x800);
            FUN_016fd940(local_18);
          }
        }
        else if (cVar1 == '\x04') {
          uVar2 = FUN_00b89270();
          FUN_00b8e520(uVar2,&local_28,0x802);
          FUN_016fd940(local_28);
        }
        else if (cVar1 == '\x05') {
          uVar2 = FUN_00b89270();
          FUN_00b8e520(uVar2,&local_30,0x105);
          FUN_016fd9b0(local_30,0x1582);
        }
      }
      else if (cVar1 == '\a') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_48,0x803);
        FUN_016fd940(local_48);
      }
      else if (cVar1 == '\b') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_50,0x804);
        FUN_016fd940(local_50);
      }
      else if (cVar1 == '\t') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_58,0x805);
        FUN_016fd940(local_58);
      }
      else if (cVar1 == '\n') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_60,0x104);
        FUN_016fd9b0(local_60,0x1581);
      }
    }
    else if (cVar1 < '\x11') {
      if (cVar1 == '\x10') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_90,0x80a);
        FUN_016fd9b0(local_90,0x1595);
      }
      else if (cVar1 == '\f') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_70,0x806);
        FUN_016fd9b0(local_70,0x1592);
      }
      else if (cVar1 == '\r') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_78,0x807);
        FUN_016fd940(local_78);
      }
      else if (cVar1 == '\x0e') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_80,0x808);
        FUN_016fd9b0(local_80,0x1593);
      }
      else if (cVar1 == '\x0f') {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_88,0x809);
        FUN_016fd9b0(local_88,0x1594);
      }
    }
    else if (cVar1 == '\x11') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_98,0x101);
      FUN_016fd9b0(local_98,0x157f);
    }
    else if (cVar1 == '\x12') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_40,0x83);
      FUN_016fd940(local_40);
    }
    else if (cVar1 == '\x13') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_a0,0x106);
      FUN_016fd9b0(local_a0,0x1582);
    }
    else if (cVar1 == '\x14') {
      FUN_016fd940(*(undefined8 *)(param_1 + 0x98));
    }
    if ((*(longlong *)PTR_DAT_02005ba8 != 0) &&
       (*(char *)(*(longlong *)PTR_DAT_02005ba8 + 0xa9) != '\0')) {
      FUN_00805990(*(undefined8 *)PTR_DAT_02005ba8);
    }
  }
  if (*(longlong *)PTR_DAT_020052f8 != 0) {
    FUN_00805200(*(undefined8 *)(*(longlong *)PTR_DAT_020052f8 + 8));
  }
  FUN_00414560(&local_a0,0x13);
  return;
}

