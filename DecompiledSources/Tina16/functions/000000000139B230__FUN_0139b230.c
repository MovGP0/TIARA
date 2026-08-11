/* Ghidra address: 0139b230 */
/* Ghidra symbol: FUN_0139b230 */


undefined8
FUN_0139b230(ulonglong param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  char cVar1;
  
  *param_4 = 0;
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x52) {
    if (param_1 == 0x51) {
      *param_4 = 1;
      *param_7 = 1;
      *param_5 = 0xd;
      *param_6 = 0xfffffff7;
      return 10;
    }
    if (param_1 < 0x2e) {
      if (param_1 == 0x2d) {
        return 0x33;
      }
      if (param_1 < 0x12) {
        if (param_1 == 0x11) {
          return 0;
        }
        if (param_1 < 0xb) {
          if (param_1 == 10) {
LAB_0139bbcb:
            *param_3 = 1;
            return 0x32;
          }
          if (param_1 < 6) {
            if (param_1 == 5) {
              return 0x3b;
            }
            if (param_1 == 1) {
              return 0x33;
            }
            if (param_1 == 2) {
              *param_4 = 1;
              *param_7 = 3;
              *param_5 = 7;
              *param_6 = 0x25;
              return 0x43;
            }
            if (param_1 == 3) {
              return 0x34;
            }
          }
          else {
            if (param_1 == 6) {
              *param_4 = 1;
              *param_7 = 0;
              *param_5 = 6;
              *param_6 = 10;
              return 5;
            }
            if (param_1 == 7) {
              *param_4 = 1;
              *param_7 = 0;
              *param_5 = 6;
              *param_6 = 10;
              return 6;
            }
            if (param_1 == 8) {
              *param_4 = 1;
              *param_7 = 3;
              *param_5 = 7;
              *param_6 = 0x25;
              return 0x43;
            }
          }
        }
        else if (param_1 < 0xf) {
          if (param_1 == 0xe) {
            return 0x3c;
          }
          if (param_1 == 0xb) {
LAB_0139bbd9:
            *param_2 = '\x03';
            *param_4 = 1;
            *param_7 = 3;
            *param_5 = 0xd;
            *param_6 = 0x3a;
            return 0xe;
          }
          if (param_1 == 0xc) goto LAB_0139bc08;
          if (param_1 == 0xd) {
            return 0;
          }
        }
        else {
          if (param_1 == 0xf) {
            return 0x34;
          }
          if (param_1 == 0x10) {
            return 0;
          }
        }
      }
      else if (param_1 < 0x1d) {
        if (param_1 == 0x1c) {
          return 0x68;
        }
        if (param_1 < 0x17) {
          if (param_1 == 0x16) {
            return 0x2c;
          }
          if (param_1 == 0x12) {
            return 0;
          }
          if (param_1 == 0x14) {
            *param_4 = 1;
            *param_7 = 0;
            *param_5 = 6;
            *param_6 = 10;
            return 8;
          }
          if (param_1 == 0x15) {
LAB_0139bc61:
            *param_2 = '\x03';
            *param_4 = 1;
            *param_7 = 3;
            *param_5 = 0xd;
            *param_6 = 0x4b;
            return 0x10;
          }
        }
        else {
          if (param_1 == 0x17) {
            return 0x2c;
          }
          if (param_1 == 0x19) {
            return 0;
          }
          if (param_1 - 0x1a < 2) {
LAB_0139bcab:
            *param_4 = 1;
            *param_7 = 0;
            *param_5 = 1;
            *param_6 = 0xffffffef;
            return 9;
          }
        }
      }
      else if (param_1 < 0x2b) {
        if (param_1 == 0x2a) {
          *param_4 = 1;
          *param_7 = 0;
          *param_5 = 1;
          *param_6 = 0xffffffef;
          return 0xb;
        }
        if (param_1 == 0x1d) {
          return 0x3d;
        }
        if (param_1 == 0x27) {
          return 0x3f;
        }
        if (param_1 == 0x29) {
          return 0;
        }
      }
      else {
        if (param_1 == 0x2b) {
          *param_4 = 1;
          *param_7 = 0;
          *param_5 = 1;
          *param_6 = 0xffffffeb;
          return 10;
        }
        if (param_1 == 0x2c) {
          return 0x6f;
        }
      }
    }
    else if (param_1 < 0x42) {
      if (param_1 == 0x41) {
        return 0x3f1;
      }
      if (param_1 < 0x3a) {
        if (param_1 == 0x39) {
LAB_0139bcd7:
          *param_4 = 1;
          *param_7 = 1;
          *param_5 = 0xd;
          *param_6 = 0xfffffff9;
          return 9;
        }
        if (param_1 < 0x34) {
          if (param_1 == 0x33) {
            return 0x2c;
          }
          if (param_1 == 0x2e) {
            return 0x3e;
          }
          if (param_1 == 0x31) {
            return 0x2c;
          }
          if (param_1 == 0x32) {
            return 0x2c;
          }
        }
        else {
          if (param_1 == 0x34) {
            return 0x2c;
          }
          if (param_1 == 0x35) {
            return 0x18;
          }
          if (param_1 == 0x37) {
            return 0x18;
          }
        }
      }
      else {
        if (param_1 < 0x3d) {
          if (param_1 != 0x3a) {
            if (param_1 == 0x3b) goto LAB_0139bcd7;
            if (param_1 != 0x3c) {
              return 0;
            }
          }
          *param_4 = 1;
          *param_7 = 0;
          *param_5 = 1;
          *param_6 = 0xffffffef;
          return 9;
        }
        if (param_1 - 0x3d < 2) {
          *param_4 = 1;
          *param_5 = 0xb;
          *param_6 = 0xb;
          return 0x43;
        }
        if (param_1 == 0x3f) {
          return 0x3eb;
        }
        if (param_1 == 0x40) {
          return 0x3ea;
        }
      }
    }
    else if (param_1 < 0x4a) {
      if (param_1 == 0x49) {
        return 40000;
      }
      if (param_1 < 0x46) {
        if (param_1 == 0x45) {
          return 2;
        }
        if (param_1 == 0x42) {
          return 0x3ed;
        }
        if (param_1 == 0x43) {
          return 0x3f9;
        }
        if (param_1 == 0x44) {
          return 0x3e9;
        }
      }
      else {
        if (param_1 == 0x46) {
          return 0x34;
        }
        if (param_1 == 0x47) {
          return 0x3b;
        }
        if (param_1 == 0x48) {
          return 0x3b;
        }
      }
    }
    else if (param_1 < 0x4e) {
      if (param_1 == 0x4d) {
        return 0x9c43;
      }
      if (param_1 == 0x4a) {
        return 0x9c42;
      }
      if (param_1 == 0x4b) {
        return 0x9c44;
      }
      if (param_1 == 0x4c) {
        return 0x9c41;
      }
    }
    else {
      if (param_1 == 0x4e) {
        return 0x9c45;
      }
      if (param_1 == 0x50) {
        *param_4 = 1;
        *param_7 = 1;
        *param_5 = 0xd;
        *param_6 = 0xfffffff9;
        return 0xb;
      }
    }
  }
  else if (param_1 < 0xcb) {
    if (param_1 < 0x65) {
      if (param_1 == 100) {
        return 0x3f7;
      }
      if (param_1 < 0x5e) {
        if (param_1 == 0x5d) {
          return 0x76;
        }
        if (param_1 < 0x56) {
          if (param_1 == 0x55) {
            return 0x17;
          }
          if (param_1 == 0x52) {
            return 0x17;
          }
          if (param_1 == 0x53) {
            return 0x17;
          }
          if (param_1 == 0x54) {
            return 0x17;
          }
        }
        else {
          if (param_1 == 0x56) {
            return 0x19;
          }
          if (param_1 == 0x58) {
            return 0x19;
          }
          if (param_1 == 0x5c) {
            return 0x2d;
          }
        }
      }
      else if (param_1 < 0x62) {
        if (param_1 == 0x61) {
          *param_2 = '\x02';
          return 0x15;
        }
        if (param_1 == 0x5e) {
          return 0x15;
        }
        if (param_1 == 0x5f) {
          return 0x15;
        }
        if (param_1 == 0x60) {
          *param_3 = 1;
          *param_2 = '\0';
          return 0x15;
        }
      }
      else {
        if (param_1 == 0x62) {
          return 0x69;
        }
        if (param_1 == 99) {
          return 0x3f6;
        }
      }
    }
    else if (param_1 < 0x6d) {
      if (param_1 == 0x6c) {
        *param_2 = '\x02';
        return 0x1b;
      }
      if (param_1 < 0x69) {
        if (param_1 == 0x68) {
          return 0x9c48;
        }
        if (param_1 == 0x65) {
          return 0x3ef;
        }
        if (param_1 == 0x66) {
          return 0x9c46;
        }
        if (param_1 == 0x67) {
          return 0x9c47;
        }
      }
      else {
        if (param_1 == 0x69) {
          return 0x1a;
        }
        if (param_1 == 0x6a) {
          *param_2 = '\0';
          *param_3 = 1;
          return 0x1a;
        }
        if (param_1 == 0x6b) {
          return 0x1b;
        }
      }
    }
    else if (param_1 < 0xc9) {
      if (param_1 == 200) goto LAB_0139bcab;
      if (param_1 == 0x6f) {
        *param_4 = 1;
        *param_7 = 1;
        *param_5 = 0xffffffdd;
        *param_6 = 0x28;
        return 5;
      }
      if (param_1 == 0x70) {
        *param_4 = 1;
        *param_7 = 1;
        *param_5 = 0xffffffdd;
        *param_6 = 0x28;
        return 6;
      }
      if (param_1 == 0x71) {
        return 0x5f;
      }
    }
    else {
      if (param_1 == 0xc9) {
LAB_0139bd2f:
        *param_4 = 1;
        if (*param_2 == '\0') {
          *param_7 = 0;
          *param_5 = 0xfffffffc;
          *param_6 = 0xffffffef;
          return 0x6b;
        }
        if (*param_2 == '\x03') {
          *param_7 = 2;
          *param_5 = 0xfffffffb;
          *param_6 = 4;
          return 0x6b;
        }
        return 0x6b;
      }
      if (param_1 == 0xca) {
        return 0x6a;
      }
    }
  }
  else if (param_1 < 0xdf) {
    if (param_1 == 0xde) {
      return 0x5f;
    }
    if (param_1 < 0xd7) {
      if (param_1 == 0xd6) {
        return 0x65;
      }
      if (param_1 < 0xd3) {
        if (param_1 == 0xd2) {
LAB_0139bc08:
          *param_2 = '\x03';
          *param_3 = 1;
          *param_4 = 1;
          *param_7 = 1;
          *param_5 = 0x24;
          *param_6 = 6;
          return 0x6c;
        }
        if (param_1 - 0xcb < 3) goto LAB_0139c18a;
        if (param_1 - 0xce < 2) {
          return 0x34;
        }
        if (param_1 - 0xd0 < 2) {
          return 0x3b;
        }
      }
      else {
        if (param_1 == 0xd3) {
          return 0x6f;
        }
        if (param_1 == 0xd4) goto LAB_0139bbcb;
        if (param_1 == 0xd5) goto LAB_0139bbd9;
      }
    }
    else if (param_1 < 0xdb) {
      if (param_1 == 0xda) {
        return 0x67;
      }
      if (param_1 == 0xd7) {
        return 0x66;
      }
      if (param_1 == 0xd8) {
        return 0x3c;
      }
      if (param_1 == 0xd9) goto LAB_0139bc61;
    }
    else {
      if (param_1 == 0xdb) {
        *param_4 = 1;
        if (*param_2 == '\0') {
          *param_7 = 0;
          *param_5 = 0xfffffffc;
          *param_6 = 0xffffffec;
          return 0x6d;
        }
        if (*param_2 == '\x03') {
          *param_7 = 2;
          *param_5 = 0xfffffffb;
          *param_6 = 7;
          return 0x6d;
        }
        return 0x6d;
      }
      if (param_1 == 0xdc) {
        *param_4 = 1;
        if (*param_2 == '\0') {
          *param_7 = 0;
          *param_5 = 0xfffffffc;
          *param_6 = 0xffffffef;
          return 0x6e;
        }
        if (*param_2 == '\x03') {
          *param_7 = 2;
          *param_5 = 0xfffffffb;
          *param_6 = 4;
          return 0x6e;
        }
        return 0x6e;
      }
      if (param_1 == 0xdd) {
        return 0x70;
      }
    }
  }
  else if (param_1 < 0xe7) {
    if (param_1 == 0xe6) {
      return 0x2cee;
    }
    if (param_1 < 0xe3) {
      if (param_1 == 0xe2) {
        return 0x71;
      }
      if (param_1 == 0xdf) {
        *param_4 = 1;
        *param_7 = 0;
        *param_5 = 0x19;
        *param_6 = 0xfffffff6;
        return 6;
      }
      if (param_1 == 0xe0) {
        *param_4 = 1;
        *param_7 = 0;
        *param_5 = 0x19;
        *param_6 = 0xfffffff6;
        return 5;
      }
      if (param_1 == 0xe1) {
        *param_4 = 1;
        *param_7 = 0;
        *param_5 = 0x20;
        *param_6 = 0xffffffec;
        return 8;
      }
    }
    else {
      if (param_1 == 0xe3) {
        return 0x34;
      }
      if (param_1 == 0xe4) {
        return 0x74;
      }
      if (param_1 == 0xe5) {
        return 0x72;
      }
    }
  }
  else if (param_1 < 0xeb) {
    if (param_1 == 0xea) {
      return 0x75;
    }
    if (param_1 == 0xe7) goto LAB_0139bd2f;
    if (param_1 == 0xe8) {
      return 0x68;
    }
    if (param_1 == 0xe9) goto LAB_0139bc08;
  }
  else {
    if (param_1 == 0xeb) {
      return 0x73;
    }
    if (param_1 == 0xec) {
LAB_0139c18a:
      *param_4 = 1;
      cVar1 = *param_2;
      if (cVar1 == '\0') {
        *param_7 = 0;
        *param_5 = 0xb;
        *param_6 = 0xb;
        return 0x43;
      }
      if (cVar1 == '\x01') {
        *param_7 = 3;
        *param_5 = 7;
        *param_6 = 0x25;
        return 0x43;
      }
      if (cVar1 == '\x02') {
        *param_7 = 2;
        *param_5 = 0xffffffec;
        *param_6 = 0x21;
        return 0x43;
      }
      if (cVar1 == '\x03') {
        *param_7 = 1;
        *param_5 = 0xffffffeb;
        *param_6 = 0x23;
        return 0x43;
      }
      return 0x43;
    }
  }
  return 0;
}

