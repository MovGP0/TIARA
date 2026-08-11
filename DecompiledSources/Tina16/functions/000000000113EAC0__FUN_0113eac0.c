/* Ghidra address: 0113eac0 */
/* Ghidra symbol: FUN_0113eac0 */


void FUN_0113eac0(longlong param_1,undefined8 param_2,longlong *param_3,double param_4,
                 double param_5,int param_6,undefined8 *param_7,char param_8)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double unaff_XMM7_Qa;
  double dVar7;
  double dVar8;
  double local_88;
  double local_80;
  double local_78;
  double local_70 [8];
  
  bVar6 = *(char *)(param_1 + 0x19) != '\x01';
  if (bVar6) {
    uVar5 = 1;
  }
  else {
    FUN_010bf060(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_02005720);
    uVar5 = *(uint *)PTR_DAT_020056c0;
  }
  (**(code **)(*param_3 + 0x10))(param_3,param_2,0);
  cVar1 = (**(code **)(*param_3 + 0x30))(param_3,local_70,&local_80,0);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_3 + 0x30))(param_3,&local_78,&local_88,0);
  }
  iVar3 = 0;
  uVar4 = 0;
  dVar8 = 0.0;
  while ((bVar2 != 0 && (iVar3 < param_6))) {
    while ((bVar2 != 0 && (local_78 <= param_4))) {
      local_70[0] = local_78;
      local_80 = local_88;
      bVar2 = (**(code **)(*param_3 + 0x30))(param_3,&local_78,&local_88,0);
      unaff_XMM7_Qa = local_88;
      if ((bVar2 & *(char *)(param_1 + 0x19) == '\x01') != 0) {
        unaff_XMM7_Qa =
             (double)FUN_010bf070(*(undefined8 *)(param_1 + 0x20),
                                  (local_80 * (local_78 - param_4) +
                                  local_88 * (param_4 - local_70[0])) / (local_78 - local_70[0]));
      }
    }
    if (((param_8 != '\0') && (uVar4 == 0)) && (iVar3 == 0)) {
      dVar8 = unaff_XMM7_Qa;
    }
    if (bVar2 != 0) {
      dVar7 = (local_80 * (local_78 - param_4) + local_88 * (param_4 - local_70[0])) /
              (local_78 - local_70[0]);
      if (*(char *)(param_1 + 0x19) == '\x01') {
        dVar7 = (double)FUN_010bf070(*(undefined8 *)(param_1 + 0x20),dVar7);
      }
      unaff_XMM7_Qa = dVar7 - dVar8;
      if (uVar4 == !bVar6) {
        param_7[(longlong)iVar3 * 2] = unaff_XMM7_Qa;
        param_7[(longlong)iVar3 * 2 + 1] = 0;
      }
      param_4 = param_4 + param_5 / (double)(int)uVar5;
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar5) {
        uVar4 = 0;
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0113e920(param_1,*param_7,param_7[(longlong)(param_6 + -1) * 2]);
  }
  return;
}

