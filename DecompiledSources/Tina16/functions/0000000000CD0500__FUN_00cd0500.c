/* Ghidra address: 00cd0500 */
/* Ghidra symbol: FUN_00cd0500 */


/* WARNING: Removing unreachable block (ram,0x00cd0875) */
/* WARNING: Removing unreachable block (ram,0x00cd08b2) */
/* WARNING: Removing unreachable block (ram,0x00cd08bf) */
/* WARNING: Removing unreachable block (ram,0x00cd09c6) */
/* WARNING: Removing unreachable block (ram,0x00cd09d3) */
/* WARNING: Removing unreachable block (ram,0x00cd082b) */
/* WARNING: Removing unreachable block (ram,0x00cd0838) */
/* WARNING: Removing unreachable block (ram,0x00cd0810) */
/* WARNING: Removing unreachable block (ram,0x00cd081d) */
/* WARNING: Removing unreachable block (ram,0x00cd0a2b) */
/* WARNING: Removing unreachable block (ram,0x00cd0a68) */
/* WARNING: Removing unreachable block (ram,0x00cd0a75) */
/* WARNING: Removing unreachable block (ram,0x00cd0a32) */
/* WARNING: Removing unreachable block (ram,0x00cd0a3f) */
/* WARNING: Removing unreachable block (ram,0x00cd09e1) */
/* WARNING: Removing unreachable block (ram,0x00cd09ee) */
/* WARNING: Removing unreachable block (ram,0x00cd087c) */
/* WARNING: Removing unreachable block (ram,0x00cd0889) */

longlong FUN_00cd0500(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_20 = 0;
  if (*(char *)(param_1 + 10) == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02002180);
    FUN_0086dfd0(&PTR_FUN_00cca500,1,local_10);
    FUN_004134c0();
  }
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      local_20 = 0;
      if (*(char *)(param_1 + 10) == '\x01') {
        if (*(longlong *)PTR_DAT_02003ea0 != 0) {
          local_20 = (**(code **)PTR_DAT_02003ea0)();
        }
      }
      else {
        local_20 = 0;
        if (*(char *)(param_1 + 10) == '\x02') {
          if (*(longlong *)PTR_DAT_02001e98 != 0) {
            local_20 = (**(code **)PTR_DAT_02001e98)();
          }
        }
        else if (*(longlong *)PTR_DAT_02002448 != 0) {
          local_20 = (**(code **)PTR_DAT_02002448)();
        }
      }
    }
    else if (bVar1 == 0) {
      if (*(char *)(param_1 + 10) == '\x01') {
        if (*(longlong *)PTR_DAT_020014d8 != 0) {
          local_20 = (**(code **)PTR_DAT_020014d8)();
        }
      }
      else if (*(char *)(param_1 + 10) == '\x02') {
        if (*(longlong *)PTR_DAT_02004098 != 0) {
          local_20 = (**(code **)PTR_DAT_02004098)();
        }
      }
      else if (*(longlong *)PTR_DAT_020045b0 != 0) {
        local_20 = (**(code **)PTR_DAT_020045b0)();
      }
    }
    else if (bVar1 == 1) {
      if (*(char *)(param_1 + 10) == '\x01') {
        if (*(longlong *)PTR_DAT_02003980 != 0) {
          local_20 = (**(code **)PTR_DAT_02003980)();
        }
      }
      else if (*(char *)(param_1 + 10) == '\x02') {
        if (*(longlong *)PTR_DAT_02001938 != 0) {
          local_20 = (**(code **)PTR_DAT_02001938)();
        }
      }
      else if (*(longlong *)PTR_DAT_02001e58 != 0) {
        local_20 = (**(code **)PTR_DAT_02001e58)();
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)(param_1 + 10) == '\x01') {
        if (*(longlong *)PTR_DAT_020046d8 != 0) {
          local_20 = (**(code **)PTR_DAT_020046d8)();
        }
      }
      else if (*(char *)(param_1 + 10) == '\x02') {
        if (*(longlong *)PTR_DAT_020027d0 != 0) {
          local_20 = (**(code **)PTR_DAT_020027d0)();
        }
      }
      else if (*(longlong *)PTR_DAT_02002ce8 != 0) {
        local_20 = (**(code **)PTR_DAT_02002ce8)();
      }
    }
  }
  else if (bVar1 == 4) {
    cVar2 = *(char *)(param_1 + 10);
    if (cVar2 == '\x01') {
      if (*(longlong *)PTR_DAT_02004090 == 0) {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02003ea0 != 0) {
          local_20 = (**(code **)PTR_DAT_02003ea0)();
        }
      }
      else {
        local_20 = (**(code **)PTR_DAT_02004090)();
      }
    }
    else if (cVar2 == '\x02') {
      if (*(longlong *)PTR_DAT_02002078 == 0) {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02001e98 != 0) {
          local_20 = (**(code **)PTR_DAT_02001e98)();
        }
      }
      else {
        local_20 = (**(code **)PTR_DAT_02002078)();
      }
    }
    else if (*(longlong *)PTR_DAT_02002668 == 0) {
      if (cVar2 == '\x01') {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02003ea0 != 0) {
          local_20 = (**(code **)PTR_DAT_02003ea0)();
        }
      }
      else {
        local_20 = 0;
        if (cVar2 == '\x02') {
          if (*(longlong *)PTR_DAT_02001e98 != 0) {
            local_20 = (**(code **)PTR_DAT_02001e98)();
          }
        }
        else if (*(longlong *)PTR_DAT_02002448 != 0) {
          local_20 = (**(code **)PTR_DAT_02002448)();
        }
      }
    }
    else {
      local_20 = (**(code **)PTR_DAT_02002668)();
    }
  }
  else if (bVar1 == 5) {
    cVar2 = *(char *)(param_1 + 10);
    if (cVar2 == '\x01') {
      if (*(longlong *)PTR_DAT_02004388 == 0) {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02003ea0 != 0) {
          local_20 = (**(code **)PTR_DAT_02003ea0)();
        }
      }
      else {
        local_20 = (**(code **)PTR_DAT_02004388)();
      }
    }
    else if (cVar2 == '\x02') {
      if (*(longlong *)PTR_DAT_020023c8 == 0) {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02001e98 != 0) {
          local_20 = (**(code **)PTR_DAT_02001e98)();
        }
      }
      else {
        local_20 = (**(code **)PTR_DAT_020023c8)();
      }
    }
    else if (*(longlong *)PTR_DAT_02002988 == 0) {
      if (cVar2 == '\x01') {
        local_20 = 0;
        if (*(longlong *)PTR_DAT_02003ea0 != 0) {
          local_20 = (**(code **)PTR_DAT_02003ea0)();
        }
      }
      else {
        local_20 = 0;
        if (cVar2 == '\x02') {
          if (*(longlong *)PTR_DAT_02001e98 != 0) {
            local_20 = (**(code **)PTR_DAT_02001e98)();
          }
        }
        else if (*(longlong *)PTR_DAT_02002448 != 0) {
          local_20 = (**(code **)PTR_DAT_02002448)();
        }
      }
    }
    else {
      local_20 = (**(code **)PTR_DAT_02002988)();
    }
  }
  if (local_20 == 0) {
    FUN_0041ddd0(&local_18,PTR_PTR_020047e8);
    uVar3 = FUN_0086dfd0(&PTR_FUN_00cca640,1,local_18);
    FUN_004134c0(uVar3);
  }
  FUN_00414560(&local_18,2);
  return local_20;
}

