/* Ghidra address: 01160f60 */
/* Ghidra symbol: FUN_01160f60 */


undefined4 FUN_01160f60(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  undefined4 local_3c;
  short *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_30 = (short *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  if ((*(short *)(*param_1 + 0x1fa4) == 0x50) || (*(short *)(*param_1 + 0x1fa4) == 0x53)) {
    *(int *)PTR_DAT_020045d0 = *(int *)(*param_1 + 0x1fa0) / 2;
  }
  else {
    *(undefined4 *)PTR_DAT_020045d0 = *(undefined4 *)(*param_1 + 0x1fa0);
  }
  if ((*(short *)(*param_1 + 0x1fa6) == 0x45) &&
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8)), cVar2 == '\x01')) {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),&local_30);
    if ((*local_30 == 0x53) || (*local_30 == 0x61)) {
      *(undefined4 *)PTR_DAT_020045d0 = *(undefined4 *)PTR_DAT_02002af8;
    }
    else {
      *(undefined4 *)PTR_DAT_020045d0 = *(undefined4 *)PTR_DAT_02002af8;
    }
  }
  *(undefined4 *)PTR_DAT_02004ea0 = *(undefined4 *)(*param_2 + 0x12e8);
  FUN_0040c760((double)*(int *)PTR_DAT_02004ea0);
  iVar3 = FUN_0040c770();
  *(int *)PTR_DAT_02001300 = iVar3 + 1;
  if (*(int *)PTR_DAT_02001300 < 4) {
    *(undefined4 *)PTR_DAT_02001300 = 4;
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0) + 0xe0))
            (*(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0),&local_28);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)PTR_DAT_020052d8 + 0x80),0xff0000);
  (**(code **)(**(longlong **)PTR_DAT_020052d8 + 0xf8))
            (*(longlong **)PTR_DAT_020052d8,local_28,local_24,local_20,CONCAT44(uVar5,local_1c));
  FUN_00805990(*(undefined8 *)PTR_DAT_02003280);
  FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"GENERATOR",*(undefined4 *)(PTR_DAT_02001ad0 + 0x50)
               ,*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x38) = *(undefined8 *)PTR_DAT_02005b00;
  FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_R",*(undefined4 *)(PTR_DAT_02001ad0 + 0x50),
               *(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
  iVar3 = *(int *)PTR_DAT_020045d0;
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      *(int *)PTR_DAT_020047c8 = iVar4;
      sVar1 = *(short *)(*param_1 + 0x1fa4);
      if (sVar1 == 0x48) {
        if (*(short *)(*param_1 + 0x1fa6) == 0x45) {
          FUN_011629a0(param_1,iVar4,param_2);
        }
        else {
          FUN_01162380(param_1,iVar4,param_2);
        }
      }
      else if (sVar1 == 0x4c) {
        if (*(short *)(*param_1 + 0x1fa6) == 0x45) {
          FUN_01162790(param_1,iVar4,param_2);
        }
        else {
          FUN_011625b0(param_1,iVar4,param_2);
        }
      }
      else if (sVar1 == 0x50) {
        if (*(short *)(*param_1 + 0x1fa6) == 0x45) {
          FUN_01162c00(param_1,iVar4,param_2);
        }
        else {
          FUN_01161b00(param_1,iVar4,param_2);
        }
      }
      else {
        if (sVar1 != 0x53) {
          local_3c = 3;
          goto LAB_01161412;
        }
        if (*(short *)(*param_1 + 0x1fa6) == 0x45) {
          FUN_01163070(param_1,iVar4,param_2);
        }
        else {
          FUN_01161f00(param_1,iVar4,param_2);
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(double *)(PTR_DAT_02001ad0 + 0x38) =
       *(double *)(*param_2 + 0x12e0) * *(double *)PTR_DAT_02005b00;
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0));
  if (cVar2 == '\x01') {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_R",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_R",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  local_3c = FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"KIMENET",
                          *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),
                          *(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
LAB_01161412:
  FUN_00414480(&local_30);
  FUN_00414560(&local_res18,2);
  return local_3c;
}

