/* Ghidra address: 0077abf0 */
/* Ghidra symbol: FUN_0077abf0 */


undefined8 FUN_0077abf0(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  
  if (param_2 < 0x2b) {
    if (param_2 == 0x2a) {
      (**(code **)(*param_1 + 0x150))(param_1,local_28,3);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 < 0x16) {
      if (param_2 == 0x15) {
LAB_0077b3f0:
        (**(code **)(*param_1 + 0x118))(param_1,local_28,3);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 < 0xb) {
        if (param_2 == 10) {
          return 0xff000008;
        }
        if (param_2 < 6) {
          if (param_2 == 5) {
            (**(code **)(*param_1 + 0x228))(param_1,local_28,3);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000013);
            return uVar1;
          }
          if (param_2 < 3) {
            if (param_2 == 2) {
              (**(code **)(*param_1 + 200))(param_1,local_28,3);
              uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000012);
              return uVar1;
            }
            if (param_2 == 0) {
              (**(code **)(*param_1 + 200))(param_1,local_28,5);
              uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
              return uVar1;
            }
            if (param_2 == 1) {
              (**(code **)(*param_1 + 200))(param_1,local_28,3);
              uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000012);
              return uVar1;
            }
          }
          else {
            if (param_2 == 3) {
              (**(code **)(*param_1 + 200))(param_1,local_28,2);
              uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000012);
              return uVar1;
            }
            if (param_2 == 4) {
              (**(code **)(*param_1 + 200))(param_1,local_28,4);
              uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000012);
              return uVar1;
            }
          }
        }
        else {
          if (param_2 == 6) {
            (**(code **)(*param_1 + 0x228))(param_1,local_28,2);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000009);
            return uVar1;
          }
          if (param_2 == 7) {
            return 0xff000008;
          }
          if (param_2 == 8) {
            return 0xff000008;
          }
          if (param_2 == 9) {
            return 0xff000008;
          }
        }
      }
      else if (param_2 < 0x11) {
        if (param_2 == 0x10) {
          (**(code **)(*param_1 + 200))(param_1,local_28,0x11);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 < 0xe) {
          if (param_2 == 0xd) {
            return 0xff000008;
          }
          if (param_2 == 0xb) {
            return 0xff000008;
          }
          if (param_2 == 0xc) {
            return 0xff000008;
          }
        }
        else {
          if (param_2 == 0xe) {
            (**(code **)(*param_1 + 200))(param_1,local_28,0x13);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
          if (param_2 == 0xf) {
            (**(code **)(*param_1 + 200))(param_1,local_28,0x11);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == 0x11) {
          (**(code **)(*param_1 + 200))(param_1,local_28,0x10);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x12) {
          (**(code **)(*param_1 + 200))(param_1,local_28,0x12);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x13) {
LAB_0077b392:
          (**(code **)(*param_1 + 0x118))(param_1,local_28,5);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
          return uVar1;
        }
        if (param_2 == 0x14) {
LAB_0077b3c1:
          (**(code **)(*param_1 + 0x118))(param_1,local_28,6);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
      }
    }
    else if (param_2 < 0x21) {
      if (param_2 == 0x20) {
        return 0xff000008;
      }
      if (param_2 < 0x1c) {
        if (param_2 == 0x1b) {
LAB_0077b41f:
          (**(code **)(*param_1 + 0x118))(param_1,local_28,2);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 < 0x19) {
          if (param_2 == 0x18) goto LAB_0077b392;
          if (param_2 == 0x16) goto LAB_0077b41f;
          if (param_2 == 0x17) goto LAB_0077b44e;
        }
        else {
          if (param_2 == 0x19) goto LAB_0077b3c1;
          if (param_2 == 0x1a) goto LAB_0077b3f0;
        }
      }
      else {
        if (param_2 == 0x1c) {
LAB_0077b44e:
          (**(code **)(*param_1 + 0x118))(param_1,local_28,4);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x1d) {
          return 0xff000008;
        }
        if (param_2 == 0x1e) {
          return 0xff000008;
        }
        if (param_2 == 0x1f) {
          return 0xff000008;
        }
      }
    }
    else if (param_2 < 0x26) {
      if (param_2 == 0x25) {
        (**(code **)(*param_1 + 0x138))(param_1,local_28,3);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 == 0x21) {
        return 0xff000008;
      }
      if (param_2 == 0x22) {
        (**(code **)(*param_1 + 200))(param_1,local_28,0x25);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 == 0x23) {
        (**(code **)(*param_1 + 200))(param_1,local_28,0x24);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 == 0x24) {
        (**(code **)(*param_1 + 0x138))(param_1,local_28,2);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
    }
    else {
      if (param_2 == 0x26) {
        (**(code **)(*param_1 + 0x138))(param_1,local_28,2);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 == 0x27) {
        (**(code **)(*param_1 + 0x138))(param_1,local_28,4);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 == 0x28) {
        (**(code **)(*param_1 + 0x150))(param_1,local_28,5);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
        return uVar1;
      }
      if (param_2 == 0x29) {
        (**(code **)(*param_1 + 0x150))(param_1,local_28,3);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
    }
  }
  else if (param_2 < 0x41) {
    if (param_2 == 0x40) {
LAB_0077b99d:
      (**(code **)(*param_1 + 0x1c0))(param_1,local_28,5);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 < 0x36) {
      if (param_2 == 0x35) {
        (**(code **)(*param_1 + 0x158))(param_1,local_28,0x1c);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 < 0x31) {
        if (param_2 == 0x30) {
          (**(code **)(*param_1 + 0x158))(param_1,local_28,0xe);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 < 0x2e) {
          if (param_2 == 0x2d) {
            (**(code **)(*param_1 + 0x158))(param_1,local_28,0xf);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
            return uVar1;
          }
          if (param_2 == 0x2b) {
            (**(code **)(*param_1 + 0x150))(param_1,local_28,2);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
          if (param_2 == 0x2c) {
            (**(code **)(*param_1 + 0x150))(param_1,local_28,4);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
        }
        else {
          if (param_2 == 0x2e) {
            (**(code **)(*param_1 + 0x158))(param_1,local_28,0xd);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
          if (param_2 == 0x2f) {
            (**(code **)(*param_1 + 0x158))(param_1,local_28,0xc);
            uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == 0x31) {
          return 0xff000008;
        }
        if (param_2 == 0x32) {
          return 0xff000008;
        }
        if (param_2 == 0x33) {
          (**(code **)(*param_1 + 0x158))(param_1,local_28,0x1e);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
          return uVar1;
        }
        if (param_2 == 0x34) {
          (**(code **)(*param_1 + 0x158))(param_1,local_28,0x1d);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
      }
    }
    else if (param_2 < 0x3c) {
      if (param_2 == 0x3b) {
        (**(code **)(*param_1 + 200))(param_1,local_28,10);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
        return uVar1;
      }
      if (param_2 < 0x39) {
        if (param_2 == 0x38) {
          (**(code **)(*param_1 + 200))(param_1,local_28,9);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x36) {
          (**(code **)(*param_1 + 0x158))(param_1,local_28,0x1d);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x37) {
          (**(code **)(*param_1 + 200))(param_1,local_28,0xb);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
          return uVar1;
        }
      }
      else {
        if (param_2 == 0x39) {
          (**(code **)(*param_1 + 200))(param_1,local_28,9);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x3a) {
          (**(code **)(*param_1 + 200))(param_1,local_28,8);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
      }
    }
    else {
      if (param_2 == 0x3c) {
        (**(code **)(*param_1 + 0x228))(param_1,local_28,6);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000003);
        return uVar1;
      }
      if (param_2 == 0x3d) {
        (**(code **)(*param_1 + 0x228))(param_1,local_28,5);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000002);
        return uVar1;
      }
      if (param_2 == 0x3e) {
        return 0xff000008;
      }
      if (param_2 == 0x3f) {
        return 0xff000008;
      }
    }
  }
  else if (param_2 < 0x4c) {
    if (param_2 == 0x4b) {
      (**(code **)(*param_1 + 0x200))(param_1,local_28,3);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 < 0x47) {
      if (param_2 == 0x46) {
        return 0xff000011;
      }
      if (param_2 < 0x44) {
        if (param_2 == 0x43) goto LAB_0077b99d;
        if (param_2 == 0x41) goto LAB_0077b9cc;
        if (param_2 == 0x42) goto LAB_0077b9fb;
      }
      else {
        if (param_2 == 0x44) {
LAB_0077b9cc:
          (**(code **)(*param_1 + 0x1c0))(param_1,local_28,3);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
        if (param_2 == 0x45) {
LAB_0077b9fb:
          (**(code **)(*param_1 + 0x1c0))(param_1,local_28,2);
          uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
          return uVar1;
        }
      }
    }
    else {
      if (param_2 == 0x47) {
        return 0xff000008;
      }
      if (param_2 == 0x48) {
        return 0xff000008;
      }
      if (param_2 == 0x49) {
        return 0xff000008;
      }
      if (param_2 == 0x4a) {
        (**(code **)(*param_1 + 0x200))(param_1,local_28,5);
        uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
        return uVar1;
      }
    }
  }
  else if (param_2 < 0x51) {
    if (param_2 == 0x50) {
      (**(code **)(*param_1 + 0x220))(param_1,local_28,3);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 == 0x4c) {
      (**(code **)(*param_1 + 0x200))(param_1,local_28,2);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 == 0x4d) {
      (**(code **)(*param_1 + 0x200))(param_1,local_28,4);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 == 0x4e) {
      (**(code **)(*param_1 + 0x220))(param_1,local_28,5);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000011);
      return uVar1;
    }
    if (param_2 == 0x4f) {
      (**(code **)(*param_1 + 0x220))(param_1,local_28,4);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x51) {
      (**(code **)(*param_1 + 0x220))(param_1,local_28,2);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 == 0x52) {
      (**(code **)(*param_1 + 0x220))(param_1,local_28,4);
      uVar1 = FUN_0077abb0(auStack_48,local_28,0xff000008);
      return uVar1;
    }
    if (param_2 == 0x53) {
      return 0xff000011;
    }
    if (param_2 == 0x54) {
      return 0xff000008;
    }
  }
  return 0x1fffffff;
}

