/* Ghidra address: 008f0c90 */
/* Ghidra symbol: FUN_008f0c90 */


char FUN_008f0c90(undefined8 param_1,ushort param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char local_31;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  uVar2 = (ulonglong)param_2;
  cVar1 = (char)param_2;
  if (uVar2 < 0x3e) {
    if (uVar2 == 0x3d) {
      local_31 = '~';
      goto code_r0x008f1121;
    }
    if (uVar2 < 0x2b) {
      if (uVar2 == 0x2a) {
        local_31 = '\\';
        goto code_r0x008f1121;
      }
      if (uVar2 < 0x26) {
        if (uVar2 == 0x25) {
          local_31 = 'l';
          goto code_r0x008f1121;
        }
        if (uVar2 < 0x23) {
          if (uVar2 == 0x22) {
            local_31 = '\x7f';
            goto code_r0x008f1121;
          }
          if (uVar2 == 0x20) {
            local_31 = '@';
            goto code_r0x008f1121;
          }
          if (uVar2 == 0x21) {
            local_31 = 'Z';
            goto code_r0x008f1121;
          }
        }
        else {
          if (uVar2 == 0x23) {
            local_31 = '{';
            goto code_r0x008f1121;
          }
          if (uVar2 == 0x24) {
            local_31 = '[';
            goto code_r0x008f1121;
          }
        }
      }
      else {
        if (uVar2 == 0x26) {
          local_31 = 'P';
          goto code_r0x008f1121;
        }
        if (uVar2 == 0x27) {
          local_31 = '}';
          goto code_r0x008f1121;
        }
        if (uVar2 == 0x28) {
          local_31 = 'M';
          goto code_r0x008f1121;
        }
        if (uVar2 == 0x29) {
          local_31 = ']';
          goto code_r0x008f1121;
        }
      }
    }
    else if (uVar2 < 0x30) {
      if (uVar2 == 0x2f) {
        local_31 = 'a';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x2b) {
        local_31 = 'N';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x2c) {
        local_31 = 'k';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x2d) {
        local_31 = '`';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x2e) {
        local_31 = 'K';
        goto code_r0x008f1121;
      }
    }
    else {
      if (uVar2 - 0x30 < 10) {
        local_31 = cVar1 + -0x40;
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x3a) {
        local_31 = 'z';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x3b) {
        local_31 = '^';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x3c) {
        local_31 = 'L';
        goto code_r0x008f1121;
      }
    }
  }
  else if (uVar2 < 0x61) {
    if (uVar2 < 0x4a) {
      if (uVar2 == 0x3e) {
        local_31 = 'n';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x3f) {
        local_31 = 'o';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x40) {
        local_31 = '|';
        goto code_r0x008f1121;
      }
      if (uVar2 - 0x41 < 9) {
        local_31 = cVar1 + -0x80;
        goto code_r0x008f1121;
      }
    }
    else if (uVar2 < 0x5d) {
      if (uVar2 == 0x5c) {
        local_31 = -0x20;
        goto code_r0x008f1121;
      }
      if (uVar2 - 0x4a < 9) {
        local_31 = cVar1 + -0x79;
        goto code_r0x008f1121;
      }
      if (uVar2 - 0x53 < 8) {
        local_31 = cVar1 + -0x71;
        goto code_r0x008f1121;
      }
    }
    else {
      if (uVar2 == 0x5f) {
        local_31 = 'm';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x60) {
        local_31 = 'y';
        goto code_r0x008f1121;
      }
    }
  }
  else if (uVar2 < 0x7e) {
    if (uVar2 == 0x7d) {
      local_31 = -0x30;
      goto code_r0x008f1121;
    }
    if (uVar2 < 0x73) {
      if (uVar2 - 0x61 < 9) {
        local_31 = cVar1 + ' ';
        goto code_r0x008f1121;
      }
      if (uVar2 - 0x6a < 9) {
        local_31 = cVar1 + '\'';
        goto code_r0x008f1121;
      }
    }
    else {
      if (uVar2 - 0x73 < 8) {
        local_31 = cVar1 + '/';
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x7b) {
        local_31 = -0x40;
        goto code_r0x008f1121;
      }
      if (uVar2 == 0x7c) {
        local_31 = 'O';
        goto code_r0x008f1121;
      }
    }
  }
  else {
    if (uVar2 == 0x7e) {
      local_31 = -0x5f;
      goto code_r0x008f1121;
    }
    if (uVar2 == 0xa2) {
      local_31 = 'J';
      goto code_r0x008f1121;
    }
    if (uVar2 == 0xa6) {
      local_31 = 'j';
      goto code_r0x008f1121;
    }
    if (uVar2 == 0xac) {
      local_31 = '_';
      goto code_r0x008f1121;
    }
  }
  FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
  local_30[0] = (uint)param_2;
  local_28 = 0;
  local_20 = L"EBCDIC-US";
  local_18 = 0x11;
  uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
  FUN_004134c0(uVar3);
code_r0x008f1121:
  FUN_00414480(&local_10);
  return local_31;
}

