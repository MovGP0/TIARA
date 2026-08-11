/* Ghidra address: 0068cb30 */
/* Ghidra symbol: FUN_0068cb30 */


void FUN_0068cb30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  longlong *local_30;
  int local_28;
  int local_24;
  short *local_20;
  
  local_30 = (longlong *)0x0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,1);
  if (cVar1 == '\0') {
    bVar8 = false;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_30,uVar6);
    cVar1 = (**(code **)(*local_30 + 0x48))(local_30);
    bVar8 = cVar1 == '\0';
  }
  if (bVar8) {
    (**(code **)(*param_1 + 600))(param_1);
    uVar2 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
    pcVar7 = (code *)FUN_00411550(param_1,0xffd3);
    (*pcVar7)(param_1,0,uVar2,(longlong)*(short *)(param_2 + 0x10),(int)*(short *)(param_2 + 0x12));
  }
  else {
    uVar3 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
    cVar1 = FUN_0064c470(param_1);
    if (((cVar1 == '\x01') && ((char)param_1[0x92] != '\0')) &&
       (((uVar3 & 1) == 0 || ((uVar3 & 4) != 0)))) {
      local_20 = (short *)(param_2 + 0x10);
      local_28 = (int)*local_20;
      local_24 = (int)*(short *)(param_2 + 0x12);
      iVar4 = FUN_0068c230(param_1,&local_28,1);
      if (-1 < iVar4) {
        cVar1 = FUN_0068bca0(param_1,iVar4);
        if (cVar1 != '\0') {
          pcVar7 = (code *)FUN_00411550(param_1,0xffd3);
          (*pcVar7)(param_1,0,uVar3,(longlong)*(short *)(param_2 + 0x10),
                    (int)*(short *)(param_2 + 0x12));
          FUN_0064fca0(param_1,0xbd11,0x10000,0);
          FUN_0064e9e0(param_1,0,0xffffffff);
          goto LAB_0068cd1c;
        }
      }
    }
    FUN_00650a80(param_1,param_2);
    cVar1 = FUN_0064c470(param_1);
    if ((cVar1 == '\x01') &&
       (((char)param_1[0x92] == '\0' || (((uVar3 & 4) == 0 && ((uVar3 & 1) == 0)))))) {
      FUN_0064e9e0(param_1,0,0xffffffff);
    }
  }
LAB_0068cd1c:
  FUN_0041b800(&local_30);
  return;
}

