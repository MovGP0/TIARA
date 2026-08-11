/* Ghidra address: 016559b0 */
/* Ghidra symbol: FUN_016559b0 */


int * FUN_016559b0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  iVar1 = *param_2;
  if (iVar1 < 8) {
    if (iVar1 == 7) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
      uVar2 = FUN_01655540(6,uVar2,*(undefined8 *)(param_2 + 4));
      uVar3 = FUN_01655540(6,*(undefined8 *)(param_2 + 2),uVar3);
      uVar2 = FUN_01655540(5,uVar2,uVar3);
      uVar3 = FUN_01655470(0x4000000000000000);
      uVar3 = FUN_01655540(8,*(undefined8 *)(param_2 + 4),uVar3);
      piVar4 = (int *)FUN_01655540(7,uVar2,uVar3);
      FUN_01655990(*(undefined8 *)(param_2 + 4));
      FUN_01655990(*(undefined8 *)(param_2 + 2));
      return piVar4;
    }
    if (iVar1 - 1U < 2) {
      piVar4 = (int *)FUN_01655470(0);
      return piVar4;
    }
    if (iVar1 != 3) {
      if (iVar1 - 4U < 2) {
        uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
        uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
        piVar4 = (int *)FUN_01655540(*param_2,uVar2,uVar3);
        return piVar4;
      }
      if (iVar1 != 6) {
        return param_2;
      }
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
      uVar2 = FUN_01655540(6,uVar2,*(undefined8 *)(param_2 + 4));
      uVar3 = FUN_01655540(6,*(undefined8 *)(param_2 + 2),uVar3);
      piVar4 = (int *)FUN_01655540(4,uVar2,uVar3);
      FUN_01655990(*(undefined8 *)(param_2 + 4));
      FUN_01655990(*(undefined8 *)(param_2 + 2));
      return piVar4;
    }
    if ((char)param_2[0x2c] == '\0') {
      if (param_2[0x12] == param_1[0xe]) {
        piVar4 = (int *)FUN_01655470(0x3ff0000000000000);
        return piVar4;
      }
      piVar4 = (int *)FUN_01655470(0);
      return piVar4;
    }
    if (param_2[0x21] == 0) {
      piVar4 = (int *)FUN_01655930(0x15,param_2[0x12],param_1[0xe],1);
      return piVar4;
    }
    piVar4 = (int *)FUN_01655470(0);
    return piVar4;
  }
  if (iVar1 == 8) {
    if (**(int **)(param_2 + 4) == 1) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar3 = FUN_01655470(*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28));
      uVar5 = FUN_01655470(*(double *)(*(longlong *)(param_2 + 4) + 0x28) - 1.0);
      uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
      uVar3 = FUN_01655540(6,uVar3,uVar5);
      piVar4 = (int *)FUN_01655540(6,uVar3,uVar2);
      FUN_01655990(*(undefined8 *)(param_2 + 2));
      return piVar4;
    }
    uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
    uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
    uVar5 = FUN_016554c0(4,*(undefined8 *)(param_2 + 2));
    uVar5 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),uVar5);
    uVar5 = FUN_016554c0(3,uVar5);
    uVar2 = FUN_01655540(7,uVar2,*(undefined8 *)(param_2 + 2));
    uVar2 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),uVar2);
    uVar6 = FUN_016554c0(4,*(undefined8 *)(param_2 + 2));
    uVar3 = FUN_01655540(6,uVar3,uVar6);
    uVar2 = FUN_01655540(4,uVar2,uVar3);
    piVar4 = (int *)FUN_01655540(6,uVar5,uVar2);
    FUN_01655990(*(undefined8 *)(param_2 + 4));
    FUN_01655990(*(undefined8 *)(param_2 + 2));
    return piVar4;
  }
  if (iVar1 != 9) {
    if (iVar1 != 0x15) {
      return param_2;
    }
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Recursion found for VA vars");
    FUN_004134c0(uVar2);
    return param_1;
  }
  iVar1 = param_2[0x13];
  if (iVar1 < 0x19) {
    if (iVar1 == 0x18) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
      uVar2 = FUN_016558e0(10,0,uVar2,param_2);
      piVar4 = (int *)FUN_016558e0(9,0x30,uVar2,uVar3);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 < 0xd) {
      if (iVar1 == 0xc) {
        uVar2 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        uVar3 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
        uVar5 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
        uVar5 = FUN_016558e0(10,0,uVar5,param_2);
        uVar2 = FUN_016558e0(10,0,uVar2,uVar3);
        piVar4 = (int *)FUN_016558e0(9,0x10,uVar5,uVar2);
        FUN_01655990(param_2);
        return piVar4;
      }
      if (iVar1 < 6) {
        if (iVar1 < 4) {
          if (iVar1 == 3) {
            unaff_RDI = FUN_016554c0(0x2c,*(undefined8 *)(param_2 + 2));
            FUN_01655990(*(undefined8 *)(param_2 + 2));
            goto LAB_01656ccf;
          }
          if (iVar1 == 1) {
            unaff_RDI = FUN_016554c0(0xf,*(undefined8 *)(param_2 + 2));
            FUN_01655990(*(undefined8 *)(param_2 + 2));
            goto LAB_01656ccf;
          }
          if (iVar1 == 2) {
            uVar2 = FUN_01655470(0x3ff0000000000000);
            uVar3 = FUN_01655470(0x4000000000000000);
            uVar5 = FUN_016554c0(2,*(undefined8 *)(param_2 + 2));
            uVar3 = FUN_01655540(6,uVar3,uVar5);
            unaff_RDI = FUN_01655540(7,uVar2,uVar3);
            FUN_01655990(*(undefined8 *)(param_2 + 2));
            goto LAB_01656ccf;
          }
        }
        else {
          if (iVar1 == 4) {
            unaff_RDI = FUN_016554c0(0x3f,*(undefined8 *)(param_2 + 2));
            FUN_01655990(*(undefined8 *)(param_2 + 2));
            goto LAB_01656ccf;
          }
          if (iVar1 == 5) {
            uVar2 = FUN_01655470(0x3fdbcb7b1526e50e);
            unaff_RDI = FUN_01655540(7,uVar2,*(undefined8 *)(param_2 + 2));
            FUN_01655990(*(undefined8 *)(param_2 + 2));
            goto LAB_01656ccf;
          }
        }
      }
      else if (iVar1 < 10) {
        if (iVar1 == 9) {
          uVar2 = FUN_016554c0(8,*(undefined8 *)(param_2 + 2));
          unaff_RDI = FUN_016554c0(0xe,uVar2);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
        if (iVar1 - 6U < 2) {
          if (**(int **)(param_2 + 4) == 1) {
            uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
            uVar3 = FUN_01655470(*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28));
            uVar5 = FUN_016554c0(1,*(undefined8 *)(param_2 + 2));
            uVar6 = FUN_01655470(*(double *)(*(longlong *)(param_2 + 4) + 0x28) - 1.0);
            uVar5 = FUN_01655540(8,uVar5,uVar6);
            uVar3 = FUN_01655540(6,uVar3,uVar5);
            uVar5 = FUN_016554c0(0xf,*(undefined8 *)(param_2 + 2));
            uVar3 = FUN_01655540(6,uVar3,uVar5);
            piVar4 = (int *)FUN_01655540(6,uVar3,uVar2);
            FUN_01655990(*(undefined8 *)(param_2 + 2));
          }
          else {
            uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
            uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
            uVar5 = FUN_016554c0(1,*(undefined8 *)(param_2 + 2));
            uVar5 = FUN_016554c0(4,uVar5);
            uVar5 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),uVar5);
            uVar5 = FUN_016554c0(3,uVar5);
            uVar2 = FUN_01655540(7,uVar2,*(undefined8 *)(param_2 + 2));
            uVar2 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),uVar2);
            uVar6 = FUN_016554c0(1,*(undefined8 *)(param_2 + 2));
            uVar6 = FUN_016554c0(4,uVar6);
            uVar3 = FUN_01655540(6,uVar3,uVar6);
            uVar2 = FUN_01655540(4,uVar2,uVar3);
            piVar4 = (int *)FUN_01655540(6,uVar5,uVar2);
            FUN_01655990(*(undefined8 *)(param_2 + 4));
            FUN_01655990(*(undefined8 *)(param_2 + 2));
          }
          if (param_2[0x13] != 7) {
            return piVar4;
          }
          uVar2 = FUN_016554c0(0xf,*(undefined8 *)(param_2 + 2));
          piVar4 = (int *)FUN_01655540(6,uVar2,piVar4);
          return piVar4;
        }
        if (iVar1 == 8) {
          unaff_RDI = FUN_016554c0(9,*(undefined8 *)(param_2 + 2));
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
      }
      else {
        if (iVar1 == 10) {
          uVar2 = FUN_01655470(0x3ff0000000000000);
          uVar3 = FUN_016554c0(9,*(undefined8 *)(param_2 + 2));
          uVar5 = FUN_01655470(0x4000000000000000);
          uVar3 = FUN_01655540(8,uVar3,uVar5);
          unaff_RDI = FUN_01655540(7,uVar2,uVar3);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
        if (iVar1 == 0xb) {
          uVar2 = FUN_01655470(0x3ff0000000000000);
          uVar3 = FUN_01655470(0x3ff0000000000000);
          uVar5 = FUN_01655470(0x4000000000000000);
          uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
          uVar3 = FUN_01655540(4,uVar3,uVar5);
          unaff_RDI = FUN_01655540(7,uVar2,uVar3);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
      }
    }
    else if (iVar1 < 0x14) {
      if (iVar1 == 0x13) {
        uVar2 = FUN_01655540(7,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        uVar3 = FUN_016559b0(param_1,uVar2);
        uVar5 = FUN_01655470(0x3ff0000000000000);
        uVar6 = FUN_01655470(0x3ff0000000000000);
        uVar7 = FUN_01655470(0x4000000000000000);
        uVar2 = FUN_01655540(8,uVar2,uVar7);
        uVar2 = FUN_01655540(4,uVar6,uVar2);
        uVar2 = FUN_01655540(7,uVar5,uVar2);
        piVar4 = (int *)FUN_01655540(6,uVar2,uVar3);
        FUN_01655990(*(undefined8 *)(param_2 + 4));
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        return piVar4;
      }
      if (iVar1 < 0x10) {
        if (iVar1 == 0xf) {
          piVar4 = (int *)FUN_01655470(0);
          return piVar4;
        }
        if (iVar1 == 0xd) {
          unaff_RDI = FUN_01655470(0x3ff0000000000000);
          goto LAB_01656ccf;
        }
        if (iVar1 == 0xe) {
          unaff_RDI = FUN_01655470(0xbff0000000000000);
          goto LAB_01656ccf;
        }
      }
      else {
        if (iVar1 == 0x11) {
          uVar2 = FUN_01655470(0x3ff0000000000000);
          uVar3 = FUN_01655470(0x3ff0000000000000);
          uVar5 = FUN_01655470(0x4000000000000000);
          uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
          uVar3 = FUN_01655540(5,uVar3,uVar5);
          uVar3 = FUN_016554c0(2,uVar3);
          unaff_RDI = FUN_01655540(7,uVar2,uVar3);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
        if (iVar1 == 0x12) {
          uVar2 = FUN_01655470(0xbff0000000000000);
          uVar3 = FUN_01655470(0x3ff0000000000000);
          uVar5 = FUN_01655470(0x4000000000000000);
          uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
          uVar3 = FUN_01655540(5,uVar3,uVar5);
          uVar3 = FUN_016554c0(2,uVar3);
          unaff_RDI = FUN_01655540(7,uVar2,uVar3);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          goto LAB_01656ccf;
        }
      }
    }
    else {
      if (iVar1 == 0x14) {
        unaff_RDI = FUN_016554c0(0x2e,*(undefined8 *)(param_2 + 2));
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 == 0x15) {
        unaff_RDI = FUN_016554c0(0x2f,*(undefined8 *)(param_2 + 2));
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 == 0x16) {
        uVar2 = FUN_01655470(0x3ff0000000000000);
        uVar3 = FUN_016554c0(0x15,*(undefined8 *)(param_2 + 2));
        uVar5 = FUN_01655470(0x4000000000000000);
        uVar3 = FUN_01655540(8,uVar3,uVar5);
        unaff_RDI = FUN_01655540(7,uVar2,uVar3);
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 == 0x17) {
        piVar4 = (int *)FUN_01655470(0);
        return piVar4;
      }
    }
  }
  else if (iVar1 < 0x24) {
    if (iVar1 == 0x23) {
      unaff_RDI = FUN_016554c0(0x17,*(undefined8 *)(param_2 + 2));
      FUN_01655990(*(undefined8 *)(param_2 + 2));
      goto LAB_01656ccf;
    }
    if (iVar1 < 0x1f) {
      if (iVar1 == 0x1e) {
        uVar2 = FUN_01655470(0x3ff0000000000000);
        uVar3 = FUN_01655470(0x3ff0000000000000);
        uVar5 = FUN_01655470(0x4000000000000000);
        uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
        uVar3 = FUN_01655540(4,uVar3,uVar5);
        uVar3 = FUN_016554c0(2,uVar3);
        unaff_RDI = FUN_01655540(7,uVar2,uVar3);
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 < 0x1c) {
        if (iVar1 == 0x1b) {
          unaff_RDI = FUN_01655470(0x3ff0000000000000);
          goto LAB_01656ccf;
        }
        if (iVar1 == 0x19) {
          uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
          uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
          uVar2 = FUN_016558e0(10,0,uVar2,param_2);
          piVar4 = (int *)FUN_016558e0(9,0x31,uVar2,uVar3);
          FUN_01655990(param_2);
          return piVar4;
        }
        if (iVar1 == 0x1a) {
          uVar2 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          if (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_016559b0(param_1,*(longlong *)(*(longlong *)(param_2 + 4) + 0x10));
          }
          uVar2 = FUN_016558e0(10,0,uVar2,uVar3);
          piVar4 = (int *)FUN_016558e0(9,0x1a,*(undefined8 *)(param_2 + 2),uVar2);
          FUN_01655990(*(undefined8 *)(param_2 + 2));
          return piVar4;
        }
      }
      else {
        if (iVar1 == 0x1c) {
          piVar4 = (int *)FUN_01655470(0);
          return piVar4;
        }
        if (iVar1 == 0x1d) {
          piVar4 = (int *)FUN_01655470(0);
          return piVar4;
        }
      }
    }
    else {
      if (iVar1 == 0x1f) {
        uVar2 = FUN_01655470(0x3ff0000000000000);
        uVar3 = FUN_01655470(0x4000000000000000);
        uVar3 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar3);
        uVar5 = FUN_01655470(0x3ff0000000000000);
        uVar3 = FUN_01655540(5,uVar3,uVar5);
        uVar3 = FUN_016554c0(2,uVar3);
        unaff_RDI = FUN_01655540(7,uVar2,uVar3);
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 == 0x20) {
        uVar2 = FUN_01655470(0x3ff0000000000000);
        uVar3 = FUN_01655470(0x3ff0000000000000);
        uVar5 = FUN_01655470(0x4000000000000000);
        uVar5 = FUN_01655540(8,*(undefined8 *)(param_2 + 2),uVar5);
        uVar3 = FUN_01655540(5,uVar3,uVar5);
        unaff_RDI = FUN_01655540(7,uVar2,uVar3);
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
      if (iVar1 == 0x21) {
        piVar4 = (int *)FUN_01655470(0);
        return piVar4;
      }
      if (iVar1 == 0x22) {
        unaff_RDI = FUN_016558e0(9,0x2d,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        FUN_01655990(*(undefined8 *)(param_2 + 4));
        FUN_01655990(*(undefined8 *)(param_2 + 2));
        goto LAB_01656ccf;
      }
    }
  }
  else if (iVar1 < 0x33) {
    if (iVar1 == 0x32) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      piVar4 = (int *)FUN_016558e0(9,0x33,uVar2,param_2);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 == 0x24) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 4));
      uVar5 = FUN_01655540(6,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 2));
      uVar6 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 4));
      uVar5 = FUN_01655540(4,uVar5,uVar6);
      uVar5 = FUN_01655540(7,uVar5,param_2);
      uVar6 = FUN_01655470(0x4000000000000000);
      uVar2 = FUN_01655540(6,*(undefined8 *)(param_2 + 2),uVar2);
      uVar2 = FUN_01655540(6,uVar6,uVar2);
      uVar6 = FUN_01655470(0x4000000000000000);
      uVar3 = FUN_01655540(6,*(undefined8 *)(param_2 + 4),uVar3);
      uVar3 = FUN_01655540(6,uVar6,uVar3);
      uVar2 = FUN_01655540(4,uVar2,uVar3);
      piVar4 = (int *)FUN_01655540(6,uVar5,uVar2);
      FUN_01655990(*(undefined8 *)(param_2 + 2));
      FUN_01655990(*(undefined8 *)(param_2 + 4));
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 - 0x25U < 2) {
LAB_01656c88:
      piVar4 = (int *)FUN_01655470(0);
      return piVar4;
    }
    if (iVar1 == 0x28) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      piVar4 = (int *)FUN_016558e0(9,0x3b,uVar2,param_2);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 == 0x2b) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
      uVar5 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar5 = FUN_016558e0(10,0,uVar5,param_2);
      uVar2 = FUN_016558e0(10,0,uVar2,uVar3);
      piVar4 = (int *)FUN_016558e0(9,0x3a,uVar5,uVar2);
      FUN_01655990(param_2);
      return piVar4;
    }
  }
  else {
    if (iVar1 == 0x34) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      piVar4 = (int *)FUN_016558e0(9,0x36,uVar2,param_2);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 == 0x35) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      piVar4 = (int *)FUN_016558e0(9,0x37,uVar2,param_2);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 == 0x38) {
      uVar2 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
      uVar3 = FUN_016559b0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
      uVar5 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
      uVar5 = FUN_016558e0(10,0,uVar5,param_2);
      uVar2 = FUN_016558e0(10,0,uVar2,uVar3);
      piVar4 = (int *)FUN_016558e0(9,0x39,uVar5,uVar2);
      FUN_01655990(param_2);
      return piVar4;
    }
    if (iVar1 - 0x3cU < 3) goto LAB_01656c88;
  }
  uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unknown function");
  FUN_004134c0(uVar2);
LAB_01656ccf:
  uVar2 = FUN_016559b0(param_1,*(undefined8 *)(param_2 + 2));
  piVar4 = (int *)FUN_01655540(6,unaff_RDI,uVar2);
  return piVar4;
}

