/* Ghidra address: 01230460 */
/* Ghidra symbol: FUN_01230460 */


void FUN_01230460(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_58;
  int local_54;
  undefined *local_50 [5];
  
  iVar6 = 0;
  iVar7 = 0;
  iVar2 = *(int *)PTR_DAT_020037c8;
  if (DAT_02107708 == 0) {
    dVar8 = (double)FUN_0122a0a0(param_4 - *(int *)PTR_DAT_02003d58);
    dVar9 = (double)FUN_0122a020(param_5 - *(int *)PTR_DAT_020037d0);
    if ((((dVar8 < *(double *)(PTR_DAT_020040b8 + 0xb0)) ||
         (*(double *)(PTR_DAT_020040b8 + 0xb8) < dVar8)) ||
        (dVar9 < *(double *)(PTR_DAT_020040b8 + 0xc0) ||
         dVar9 == *(double *)(PTR_DAT_020040b8 + 0xc0))) || (-0.01 <= dVar9)) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x848),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x858),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
    }
    else {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x848),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x858),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),1);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x848),dVar8);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x858),dVar9);
    }
    uVar3 = param_4 - *(int *)PTR_DAT_02004040 >> 0x1f;
    if (((int)((param_4 - *(int *)PTR_DAT_02004040 ^ uVar3) - uVar3) < 3) &&
       (uVar3 = param_5 - *(int *)PTR_DAT_02003a80 >> 0x1f,
       (int)((param_5 - *(int *)PTR_DAT_02003a80 ^ uVar3) - uVar3) < 3)) {
      if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) ||
         (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
        FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff8);
      }
      else {
        FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfffa);
      }
    }
    else {
      uVar3 = param_4 - *(int *)PTR_DAT_02003528 >> 0x1f;
      if (((int)((param_4 - *(int *)PTR_DAT_02003528 ^ uVar3) - uVar3) < 3) &&
         (uVar3 = param_5 - *(int *)PTR_DAT_02005a18 >> 0x1f,
         (int)((param_5 - *(int *)PTR_DAT_02005a18 ^ uVar3) - uVar3) < 3)) {
        if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) ||
           (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) {
          FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff8);
        }
        else {
          FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfffa);
        }
      }
      else {
        uVar3 = param_4 - *(int *)PTR_DAT_02002748 >> 0x1f;
        if (((int)((param_4 - *(int *)PTR_DAT_02002748 ^ uVar3) - uVar3) < 3) &&
           (uVar3 = param_5 - *(int *)PTR_DAT_020020a8 >> 0x1f,
           (int)((param_5 - *(int *)PTR_DAT_020020a8 ^ uVar3) - uVar3) < 3)) {
          if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
            FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff8);
          }
          else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
            FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfffa);
          }
        }
        else {
          uVar3 = param_4 - *(int *)PTR_DAT_02001398 >> 0x1f;
          if (((int)((param_4 - *(int *)PTR_DAT_02001398 ^ uVar3) - uVar3) < 3) &&
             (uVar3 = param_5 - *(int *)PTR_DAT_020020a8 >> 0x1f,
             (int)((param_5 - *(int *)PTR_DAT_020020a8 ^ uVar3) - uVar3) < 3)) {
            if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
              FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff8);
            }
            else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
              FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfffa);
            }
          }
          else {
            uVar3 = param_4 - *(int *)PTR_DAT_02004040 >> 0x1f;
            if (((((int)((param_4 - *(int *)PTR_DAT_02004040 ^ uVar3) - uVar3) < 3) ||
                 (uVar3 = param_4 - *(int *)PTR_DAT_02003528 >> 0x1f,
                 (int)((param_4 - *(int *)PTR_DAT_02003528 ^ uVar3) - uVar3) < 3)) ||
                (uVar3 = param_4 - *(int *)PTR_DAT_02002748 >> 0x1f,
                (int)((param_4 - *(int *)PTR_DAT_02002748 ^ uVar3) - uVar3) < 3)) ||
               (uVar3 = param_4 - *(int *)PTR_DAT_02001398 >> 0x1f,
               (int)((param_4 - *(int *)PTR_DAT_02001398 ^ uVar3) - uVar3) < 3)) {
              FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff2);
            }
            else {
              uVar3 = param_5 - *(int *)PTR_DAT_02003a80 >> 0x1f;
              if (((((int)((param_5 - *(int *)PTR_DAT_02003a80 ^ uVar3) - uVar3) < 3) &&
                   (param_4 < *(int *)PTR_DAT_02004040)) ||
                  ((uVar3 = param_5 - *(int *)PTR_DAT_02005a18 >> 0x1f,
                   (int)((param_5 - *(int *)PTR_DAT_02005a18 ^ uVar3) - uVar3) < 3 &&
                   (*(int *)PTR_DAT_02003528 < param_4)))) ||
                 (((uVar3 = param_5 - *(int *)PTR_DAT_020020a8 >> 0x1f,
                   (int)((param_5 - *(int *)PTR_DAT_020020a8 ^ uVar3) - uVar3) < 3 &&
                   (param_4 < *(int *)PTR_DAT_02001398)) && (*(int *)PTR_DAT_02002748 < param_4))))
              {
                FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfff1);
              }
              else {
                FUN_0064e140(*(undefined8 *)(param_1 + 0x738),0xfffe);
              }
            }
          }
        }
      }
    }
  }
  if (DAT_02107708 == 0) {
    return;
  }
  FUN_005fd4e0(DAT_021076a8[0xf],DAT_02107718);
  iVar5 = param_4;
  if (DAT_02107708 != 1) {
    if (DAT_02107708 != 2) {
      if (DAT_02107708 == 3) {
        if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
          iVar2 = *(int *)PTR_DAT_02002ef8;
        }
        else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
          iVar2 = *(int *)PTR_DAT_020037c8;
        }
        FUN_0122a200(DAT_02107700,iVar2,*(undefined4 *)PTR_DAT_02001398,DAT_02107704,DAT_021076a8);
        if (*(int *)PTR_DAT_02001398 + -1 < param_4) {
          param_4 = *(int *)PTR_DAT_02001398 + -1;
        }
        iVar5 = param_4;
        if (param_4 < *(int *)PTR_DAT_02004040 + 1) {
          iVar5 = *(int *)PTR_DAT_02004040 + 1;
        }
        goto LAB_01231187;
      }
      if (DAT_02107708 == 4) {
        if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
          iVar2 = *(int *)PTR_DAT_02002ef8;
        }
        else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
          iVar2 = *(int *)PTR_DAT_020037c8;
        }
        FUN_0122a200(*(undefined4 *)PTR_DAT_02002748,iVar2,DAT_02107700,DAT_02107704,DAT_021076a8);
        if (*(int *)PTR_DAT_02003528 + -1 < param_4) {
          param_4 = *(int *)PTR_DAT_02003528 + -1;
        }
        iVar5 = param_4;
        if (param_4 < *(int *)PTR_DAT_02002748 + 1) {
          iVar5 = *(int *)PTR_DAT_02002748 + 1;
        }
        goto LAB_01231187;
      }
      if (DAT_02107708 != 0xc) {
        if (DAT_02107708 != 0xf) {
          if (DAT_02107708 == 0xd) {
            if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
              iVar2 = *(int *)PTR_DAT_02002ef8;
            }
            else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
              iVar2 = *(int *)PTR_DAT_020037c8;
            }
            (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,DAT_02107700,iVar2);
            (**(code **)(*DAT_021076a8 + 0xc0))
                      (DAT_021076a8,DAT_02107700,*(undefined4 *)PTR_DAT_020020a8);
            iVar5 = *(int *)PTR_DAT_02004040 + 1;
            if ((iVar5 <= param_4) && (iVar5 = param_4, *(int *)PTR_DAT_02001398 + -1 < param_4)) {
              iVar5 = *(int *)PTR_DAT_02001398 + -1;
            }
            goto LAB_01231187;
          }
          if (DAT_02107708 == 0xe) {
            if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
              iVar2 = *(int *)PTR_DAT_02002ef8;
            }
            else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
              iVar2 = *(int *)PTR_DAT_020037c8;
            }
            (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,DAT_02107700,iVar2);
            (**(code **)(*DAT_021076a8 + 0xc0))
                      (DAT_021076a8,DAT_02107700,*(undefined4 *)PTR_DAT_020020a8);
            if (param_4 < *(int *)PTR_DAT_02002748 + 1) {
              iVar5 = *(int *)PTR_DAT_02002748 + 1;
            }
            else if (*(int *)PTR_DAT_02003528 + -1 < param_4) {
              iVar5 = *(int *)PTR_DAT_02003528 + -1;
            }
            goto LAB_01231187;
          }
          if (DAT_02107708 != 0x16) {
            if (DAT_02107708 == 0x17) {
              if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
                iVar2 = *(int *)PTR_DAT_02002ef8;
              }
              else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
                iVar2 = *(int *)PTR_DAT_020037c8;
              }
              (**(code **)(*DAT_021076a8 + 200))
                        (DAT_021076a8,*(undefined4 *)PTR_DAT_02002748,DAT_02107704);
              (**(code **)(*DAT_021076a8 + 0xc0))
                        (DAT_021076a8,*(undefined4 *)PTR_DAT_02001398,DAT_02107704);
              goto LAB_01231187;
            }
            if (DAT_02107708 != 0x18) goto LAB_01231187;
            sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
            if (sVar1 == 0x48) {
LAB_01231130:
              iVar2 = *(int *)PTR_DAT_02002ef8;
            }
            else if ((sVar1 == 0x4c) || (sVar1 == 0x50)) {
              iVar2 = *(int *)PTR_DAT_020037c8;
            }
            else if (sVar1 == 0x53) goto LAB_01231130;
            (**(code **)(*DAT_021076a8 + 200))
                      (DAT_021076a8,*(undefined4 *)PTR_DAT_02003528,DAT_02107704);
            (**(code **)(*DAT_021076a8 + 0xc0))
                      (DAT_021076a8,*(undefined4 *)PTR_DAT_02002e50,DAT_02107704);
            goto LAB_01231187;
          }
          sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
          if (sVar1 == 0x48) {
LAB_01230ff0:
            iVar2 = *(int *)PTR_DAT_020037c8;
          }
          else if (sVar1 == 0x4c) {
LAB_01230fe5:
            iVar2 = *(int *)PTR_DAT_02002ef8;
          }
          else {
            if (sVar1 == 0x50) goto LAB_01230ff0;
            if (sVar1 == 0x53) goto LAB_01230fe5;
          }
          (**(code **)(*DAT_021076a8 + 200))
                    (DAT_021076a8,*(undefined4 *)PTR_DAT_02003d50,DAT_02107704);
          (**(code **)(*DAT_021076a8 + 0xc0))
                    (DAT_021076a8,*(undefined4 *)PTR_DAT_02004040,DAT_02107704);
          goto LAB_01231187;
        }
        sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
        if (sVar1 == 0x48) {
LAB_01230dac:
          iVar2 = *(int *)PTR_DAT_02002ef8;
        }
        else if ((sVar1 == 0x4c) || (sVar1 == 0x50)) {
          iVar2 = *(int *)PTR_DAT_020037c8;
        }
        else if (sVar1 == 0x53) goto LAB_01230dac;
        (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,DAT_02107700,iVar2);
        (**(code **)(*DAT_021076a8 + 0xc0))
                  (DAT_021076a8,DAT_02107700,*(undefined4 *)PTR_DAT_02005a18);
        if (param_4 < *(int *)PTR_DAT_02001398 + 1) {
          iVar5 = *(int *)PTR_DAT_02001398 + 1;
        }
        goto LAB_01231187;
      }
      sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
      if (sVar1 == 0x48) {
LAB_01230cf4:
        iVar2 = *(int *)PTR_DAT_020037c8;
      }
      else if (sVar1 == 0x4c) {
LAB_01230ce9:
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        if (sVar1 == 0x50) goto LAB_01230cf4;
        if (sVar1 == 0x53) goto LAB_01230ce9;
      }
      (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,DAT_02107700,iVar2);
      (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,DAT_02107700,*(undefined4 *)PTR_DAT_02003a80)
      ;
      if (*(int *)PTR_DAT_02002748 + -1 < param_4) {
        iVar5 = *(int *)PTR_DAT_02002748 + -1;
      }
      goto LAB_01231187;
    }
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
LAB_01230aba:
      iVar2 = *(int *)PTR_DAT_02002ef8;
    }
    else if ((sVar1 == 0x4c) || (sVar1 == 0x50)) {
      iVar2 = *(int *)PTR_DAT_020037c8;
    }
    else if (sVar1 == 0x53) goto LAB_01230aba;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02002e50,DAT_02107704);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,DAT_02107700,DAT_02107704);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,DAT_02107700,iVar2);
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,DAT_02107704,DAT_02107700,iVar2,DAT_021076a8);
    if (param_4 < *(int *)PTR_DAT_02001398 + 1) {
      iVar5 = *(int *)PTR_DAT_02001398 + 1;
    }
    goto LAB_01231187;
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
  if (sVar1 == 0x48) {
LAB_012309b4:
    iVar2 = *(int *)PTR_DAT_020037c8;
  }
  else if (sVar1 == 0x4c) {
LAB_012309a9:
    iVar2 = *(int *)PTR_DAT_02002ef8;
  }
  else {
    if (sVar1 == 0x50) goto LAB_012309b4;
    if (sVar1 == 0x53) goto LAB_012309a9;
  }
  (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02003d50,DAT_02107704);
  (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,DAT_02107700,DAT_02107704);
  (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,DAT_02107700,iVar2);
  FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,DAT_02107704,DAT_02107700,iVar2,DAT_021076a8);
  if (*(int *)PTR_DAT_02002748 + -1 < param_4) {
    iVar5 = *(int *)PTR_DAT_02002748 + -1;
  }
LAB_01231187:
  FUN_005fd4e0(DAT_021076a8[0xf],0x8000);
  if (*(int *)PTR_DAT_020037c8 == iVar2) {
    if (param_5 < *(int *)PTR_DAT_02002a00 + 1) {
      param_5 = *(int *)PTR_DAT_02002a00 + 1;
    }
  }
  else if (*(int *)PTR_DAT_02002a00 < param_5) {
    param_5 = *(int *)PTR_DAT_02002a00;
  }
  if (param_5 < *(int *)PTR_DAT_020037d0) {
    param_5 = *(int *)PTR_DAT_020037d0;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x738) + 0x9c) - *(int *)PTR_DAT_02001f40;
  if (iVar4 < param_5) {
    param_5 = iVar4;
  }
  if (iVar5 < *(int *)PTR_DAT_02003d58) {
    iVar5 = *(int *)PTR_DAT_02003d58;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x738) + 0x98) - *(int *)PTR_DAT_02002598;
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  if (DAT_02107708 != 0) {
    uVar10 = FUN_0122a0a0(iVar5 - *(int *)PTR_DAT_02003d58);
    uVar11 = FUN_0122a020(param_5 - *(int *)PTR_DAT_020037d0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x848),uVar10);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x858),uVar11);
    local_50[0] = PTR_DAT_02004b40 + 0x15e0;
    FUN_011777c0(local_50,DAT_021076a8,0);
  }
  FUN_0122a880(param_1,DAT_021076a8,1);
  FUN_01232af0(param_1,DAT_021076a8,1);
  FUN_005fd4e0(DAT_021076a8[0xf],0x8000);
  if (DAT_02107708 == 1) {
    *(int *)PTR_DAT_02004040 = DAT_02107700;
    *(int *)PTR_DAT_02003a80 = DAT_02107704;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02003d50,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,iVar2);
    FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,param_5,iVar5,iVar2,DAT_021076a8);
    dVar8 = (double)FUN_0122a0a0((iVar5 - *(int *)PTR_DAT_02003d58) + -1);
    iVar7 = iVar6;
    if ((dVar8 <= *(double *)(PTR_DAT_020040b8 + 0xb0)) &&
       (*(double *)(PTR_DAT_020040b8 + 0xb8) / *(double *)(PTR_DAT_020040b8 + 0xb0) < 100000.0)) {
      *(double *)(PTR_DAT_020040b8 + 0xb0) = *(double *)(PTR_DAT_020040b8 + 0xb0) / 10.0;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
      FUN_0122b3a0(param_1,DAT_021076a8);
      iVar2 = FUN_01229f20(*(double *)(PTR_DAT_020040b8 + 0xb0) * 10.0);
      iVar5 = *(int *)PTR_DAT_02003d58 + iVar2 + -5;
      iVar2 = FUN_007fd7d0(param_1);
      local_58 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x90) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x90) + iVar5;
      iVar2 = FUN_007fd800(param_1);
      local_54 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x94) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x94) + param_5 +
                 *(int *)PTR_DAT_020037d0;
      FUN_00664e60(*(longlong *)(param_1 + 0x738),&local_58);
      iVar7 = 1;
    }
    if ((*(double *)(PTR_DAT_020040b8 + 0xb0) * 10.0 < dVar8) &&
       (dVar8 < *(double *)(PTR_DAT_020040b8 + 0xb8) / 10.0)) {
      *(double *)(PTR_DAT_020040b8 + 0xb0) = *(double *)(PTR_DAT_020040b8 + 0xb0) * 10.0;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
      FUN_0122b3a0(param_1,DAT_021076a8);
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
      iVar5 = *(int *)PTR_DAT_02003d58 + iVar2 + 5;
      iVar2 = FUN_007fd7d0(param_1);
      local_58 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x90) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x90) + iVar5;
      iVar2 = FUN_007fd800(param_1);
      local_54 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x94) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x94) + param_5 +
                 *(int *)PTR_DAT_020037d0;
      FUN_00664e60(*(longlong *)(param_1 + 0x738),&local_58);
      iVar7 = 1;
    }
  }
  else if (DAT_02107708 == 2) {
    *(int *)PTR_DAT_02003528 = DAT_02107700;
    *(int *)PTR_DAT_02005a18 = DAT_02107704;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02002e50,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,iVar2);
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,param_5,iVar5,iVar2,DAT_021076a8);
    dVar8 = (double)FUN_0122a0a0((iVar5 - *(int *)PTR_DAT_02003d58) + 1);
    iVar7 = iVar6;
    if ((*(double *)(PTR_DAT_020040b8 + 0xb8) <= dVar8) &&
       (*(double *)(PTR_DAT_020040b8 + 0xb8) / *(double *)(PTR_DAT_020040b8 + 0xb0) < 100000.0)) {
      *(double *)(PTR_DAT_020040b8 + 0xb8) = *(double *)(PTR_DAT_020040b8 + 0xb8) * 10.0;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
      FUN_0122b3a0(param_1,DAT_021076a8);
      iVar2 = FUN_01229f20(*(double *)(PTR_DAT_020040b8 + 0xb8) / 10.0);
      iVar5 = *(int *)PTR_DAT_02003d58 + iVar2 + 5;
      iVar2 = FUN_007fd7d0(param_1);
      local_58 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x90) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x90) + iVar5;
      iVar2 = FUN_007fd800(param_1);
      local_54 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x94) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x94) + param_5 +
                 *(int *)PTR_DAT_020037d0;
      FUN_00664e60(*(longlong *)(param_1 + 0x738),&local_58);
      iVar7 = 2;
    }
    if ((dVar8 < *(double *)(PTR_DAT_020040b8 + 0xb8) / 10.0) &&
       (*(double *)(PTR_DAT_020040b8 + 0xb0) * 10.0 < dVar8)) {
      *(double *)(PTR_DAT_020040b8 + 0xb8) = *(double *)(PTR_DAT_020040b8 + 0xb8) / 10.0;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
      FUN_0122b3a0(param_1,DAT_021076a8);
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
      iVar5 = *(int *)PTR_DAT_02003d58 + iVar2 + -5;
      iVar2 = FUN_007fd7d0(param_1);
      local_58 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x90) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x90) + iVar5;
      iVar2 = FUN_007fd800(param_1);
      local_54 = iVar2 + *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x94) +
                 *(int *)(*(longlong *)(param_1 + 0x738) + 0x94) + param_5 +
                 *(int *)PTR_DAT_020037d0;
      FUN_00664e60(*(longlong *)(param_1 + 0x738),&local_58);
      iVar7 = 2;
    }
  }
  else if (DAT_02107708 == 3) {
    *(int *)PTR_DAT_02002748 = DAT_02107700;
    *(int *)PTR_DAT_020020a8 = DAT_02107704;
    FUN_0122a200(iVar5,iVar2,*(undefined4 *)PTR_DAT_02001398,param_5,DAT_021076a8);
  }
  else if (DAT_02107708 == 4) {
    *(int *)PTR_DAT_02001398 = DAT_02107700;
    *(int *)PTR_DAT_020020a8 = DAT_02107704;
    FUN_0122a200(*(undefined4 *)PTR_DAT_02002748,iVar2,iVar5,param_5,DAT_021076a8);
  }
  else if (DAT_02107708 == 0xc) {
    *(int *)PTR_DAT_02004040 = DAT_02107700;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,iVar5,iVar2);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,*(undefined4 *)PTR_DAT_02003a80);
  }
  else if (DAT_02107708 == 0xf) {
    *(int *)PTR_DAT_02003528 = DAT_02107700;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,iVar5,iVar2);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,*(undefined4 *)PTR_DAT_02005a18);
  }
  else if (DAT_02107708 == 0xd) {
    *(int *)PTR_DAT_02002748 = DAT_02107700;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,iVar5,iVar2);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,*(undefined4 *)PTR_DAT_020020a8);
  }
  else if (DAT_02107708 == 0xe) {
    *(int *)PTR_DAT_02001398 = DAT_02107700;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,iVar5,iVar2);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,iVar5,*(undefined4 *)PTR_DAT_020020a8);
  }
  else if (DAT_02107708 == 0x16) {
    *(int *)PTR_DAT_02003a80 = DAT_02107704;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02003d50,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,*(undefined4 *)PTR_DAT_02004040,param_5);
  }
  else if (DAT_02107708 == 0x17) {
    *(int *)PTR_DAT_020020a8 = DAT_02107704;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02002748,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,*(undefined4 *)PTR_DAT_02001398,param_5);
  }
  else if (DAT_02107708 == 0x18) {
    *(int *)PTR_DAT_02005a18 = DAT_02107704;
    (**(code **)(*DAT_021076a8 + 200))(DAT_021076a8,*(undefined4 *)PTR_DAT_02003528,param_5);
    (**(code **)(*DAT_021076a8 + 0xc0))(DAT_021076a8,*(undefined4 *)PTR_DAT_02002e50,param_5);
  }
  DAT_02107704 = param_5;
  DAT_02107700 = iVar5;
  FUN_0122a880(param_1,DAT_021076a8,0);
  FUN_01232af0(param_1,DAT_021076a8,0);
  if ((iVar7 == 1) || (iVar7 == 2)) {
    FUN_012294e0();
  }
  return;
}

