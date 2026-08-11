/* Ghidra address: 01231d80 */
/* Ghidra symbol: FUN_01231d80 */


void FUN_01231d80(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_30 [5];
  
  local_30[0] = 0;
  if (DAT_02107708 == 1) {
    *(undefined4 *)PTR_DAT_02004040 = DAT_02107700;
    *(undefined4 *)PTR_DAT_02003a80 = DAT_02107704;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02004040 - *(int *)PTR_DAT_02003d58);
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_02003a80 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      *(double *)(PTR_DAT_020040b8 + 0x30) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x20) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
    else if (sVar1 == 0x4c) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0x10) = dVar3;
      *(undefined8 *)PTR_DAT_020040b8 = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (sVar1 == 0x50) {
      *(double *)(PTR_DAT_020040b8 + 0x60) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x40) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),dVar3);
    }
    else if (sVar1 == 0x53) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0x98) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x78) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x710),dVar3);
    }
  }
  else if (DAT_02107708 == 2) {
    *(undefined4 *)PTR_DAT_02003528 = DAT_02107700;
    *(undefined4 *)PTR_DAT_02005a18 = DAT_02107704;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02003528 - *(int *)PTR_DAT_02003d58);
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_02005a18 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0x38) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x28) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (sVar1 == 0x4c) {
      *(double *)(PTR_DAT_020040b8 + 0x18) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 8) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
    else if (sVar1 == 0x50) {
      *(double *)(PTR_DAT_020040b8 + 0x70) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x58) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),dVar3);
    }
    else if (sVar1 == 0x53) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0xa8) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x90) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x720),dVar3);
    }
  }
  else if (DAT_02107708 == 3) {
    *(undefined4 *)PTR_DAT_02002748 = DAT_02107700;
    *(undefined4 *)PTR_DAT_020020a8 = DAT_02107704;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02002748 - *(int *)PTR_DAT_02003d58);
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_020020a8 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0x68) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x48) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      *(double *)(PTR_DAT_020040b8 + 0xa0) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x80) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
  }
  else if (DAT_02107708 == 4) {
    *(undefined4 *)PTR_DAT_02001398 = DAT_02107700;
    *(undefined4 *)PTR_DAT_020020a8 = DAT_02107704;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02001398 - *(int *)PTR_DAT_02003d58);
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_020020a8 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      if (dVar3 < -3.0103) {
        dVar3 = -3.0103;
      }
      *(double *)(PTR_DAT_020040b8 + 0x68) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x50) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      *(double *)(PTR_DAT_020040b8 + 0xa0) = dVar3;
      *(undefined8 *)(PTR_DAT_020040b8 + 0x88) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),uVar2);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
  }
  else if (DAT_02107708 == 0xc) {
    *(undefined4 *)PTR_DAT_02004040 = DAT_02107700;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02004040 - *(int *)PTR_DAT_02003d58);
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x20) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),uVar2);
    }
    else if (sVar1 == 0x4c) {
      *(undefined8 *)PTR_DAT_020040b8 = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),uVar2);
    }
    else if (sVar1 == 0x50) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x40) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),uVar2);
    }
    else if (sVar1 == 0x53) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x78) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),uVar2);
    }
  }
  else if (DAT_02107708 == 0xf) {
    *(undefined4 *)PTR_DAT_02003528 = DAT_02107700;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02003528 - *(int *)PTR_DAT_02003d58);
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x28) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),uVar2);
    }
    else if (sVar1 == 0x4c) {
      *(undefined8 *)(PTR_DAT_020040b8 + 8) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),uVar2);
    }
    else if (sVar1 == 0x50) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x58) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),uVar2);
    }
    else if (sVar1 == 0x53) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x90) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),uVar2);
    }
  }
  else if (DAT_02107708 == 0xd) {
    *(undefined4 *)PTR_DAT_02002748 = DAT_02107700;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02002748 - *(int *)PTR_DAT_02003d58);
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x48) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),uVar2);
    }
    else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x80) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),uVar2);
    }
  }
  else if (DAT_02107708 == 0xe) {
    *(undefined4 *)PTR_DAT_02001398 = DAT_02107700;
    uVar2 = FUN_0122a0a0(*(int *)PTR_DAT_02001398 - *(int *)PTR_DAT_02003d58);
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x50) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),uVar2);
    }
    else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      *(undefined8 *)(PTR_DAT_020040b8 + 0x88) = uVar2;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),uVar2);
    }
  }
  else if (DAT_02107708 == 0x16) {
    *(undefined4 *)PTR_DAT_02003a80 = DAT_02107704;
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_02003a80 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      *(double *)(PTR_DAT_020040b8 + 0x30) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
    else if (sVar1 == 0x4c) {
      *(double *)(PTR_DAT_020040b8 + 0x10) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (sVar1 == 0x50) {
      *(double *)(PTR_DAT_020040b8 + 0x60) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),dVar3);
    }
    else if (sVar1 == 0x53) {
      *(double *)(PTR_DAT_020040b8 + 0x98) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x710),dVar3);
    }
  }
  else if (DAT_02107708 == 0x17) {
    *(undefined4 *)PTR_DAT_020020a8 = DAT_02107704;
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_020020a8 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      *(double *)(PTR_DAT_020040b8 + 0x68) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      *(double *)(PTR_DAT_020040b8 + 0xa0) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
  }
  else if (DAT_02107708 == 0x18) {
    *(undefined4 *)PTR_DAT_02005a18 = DAT_02107704;
    dVar3 = (double)FUN_0122a020(*(int *)PTR_DAT_02005a18 - *(int *)PTR_DAT_020037d0);
    if (-0.01 < dVar3) {
      dVar3 = -0.01;
    }
    sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
    if (sVar1 == 0x48) {
      *(double *)(PTR_DAT_020040b8 + 0x38) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),dVar3);
    }
    else if (sVar1 == 0x4c) {
      *(double *)(PTR_DAT_020040b8 + 0x18) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),dVar3);
    }
    else if (sVar1 == 0x50) {
      *(double *)(PTR_DAT_020040b8 + 0x70) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),dVar3);
    }
    else if (sVar1 == 0x53) {
      *(double *)(PTR_DAT_020040b8 + 0xa8) = dVar3;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x720),dVar3);
    }
  }
  if (DAT_02107708 != 0) {
    FUN_0122b3a0(param_1,DAT_021076a8);
  }
  DAT_02107708 = 0;
  FUN_00414480(local_30);
  return;
}

