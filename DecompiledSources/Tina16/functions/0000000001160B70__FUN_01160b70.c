/* Ghidra address: 01160b70 */
/* Ghidra symbol: FUN_01160b70 */


undefined4 FUN_01160b70(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  *(undefined4 *)PTR_DAT_02004ea0 = *(undefined4 *)(*param_2 + 0x3880);
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
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
  if (cVar2 == '\0') {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"TAPFESZ",*(undefined4 *)(PTR_DAT_02001ad0 + 0x50)
                 ,*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
  }
  FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"GENERATOR",*(undefined4 *)(PTR_DAT_02001ad0 + 0x50)
               ,*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0));
  if (cVar2 == '\x01') {
    iVar3 = *(int *)(*param_2 + 0x3880);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        *(int *)PTR_DAT_020047c8 = iVar4;
        sVar1 = *(short *)(*param_1 + 0x1fa4);
        if (sVar1 == 0x48) {
          FUN_011617e0(iVar4,param_2);
        }
        else if (sVar1 == 0x4c) {
          FUN_01161970(iVar4,param_2);
        }
        else if (sVar1 == 0x50) {
          FUN_011614f0(iVar4,param_2);
        }
        else {
          if (sVar1 != 0x53) {
            local_30 = 3;
            goto LAB_01160e96;
          }
          FUN_01161610(iVar4,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined8 *)(PTR_DAT_02001ad0 + 0x28) = *(undefined8 *)*param_2;
    *(undefined8 *)(PTR_DAT_02001ad0 + 0x30) = *(undefined8 *)(*param_2 + 8);
    if (*(double *)(*param_2 + 8) == 0.0) {
      local_2c = FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"KIMENET",
                              *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),
                              *(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
    }
    else {
      local_2c = FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"DIVIDER",
                              *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),
                              *(undefined4 *)(PTR_DAT_02001ad0 + 0x54),PTR_DAT_020011d0);
    }
  }
  local_30 = local_2c;
LAB_01160e96:
  FUN_00414560(&local_res18,2);
  return local_30;
}

