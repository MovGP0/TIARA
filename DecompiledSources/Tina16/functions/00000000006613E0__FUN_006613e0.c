/* Ghidra address: 006613e0 */
/* Ghidra symbol: FUN_006613e0 */


void FUN_006613e0(undefined8 *param_1,longlong param_2,byte param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(char *)(param_2 + 0xa9) != '\0') {
    lVar5 = param_1[0xb];
    if (lVar5 == 0) {
      if (*(longlong *)(param_1[0x12] + 0x10) == 0) {
        (**(code **)(*(longlong *)param_1[5] + 0xe0))((longlong *)param_1[5],&local_38);
        (**(code **)(*(longlong *)param_1[5] + 0x1a8))((longlong *)param_1[5],&local_38);
        iVar6 = (int)local_30 - (int)local_38;
        local_30._4_4_ = local_30._4_4_ - local_38._4_4_;
        if (*(char *)(param_1[5] + 0xae) != '\0') {
          if (iVar6 == 0) {
            iVar6 = FUN_0064dcf0(param_2);
          }
          if (local_30._4_4_ == 0) {
            local_30._4_4_ = FUN_0064dcd0(param_2);
          }
        }
        FUN_00423b80(&local_48,local_38 & 0xffffffff,local_38._4_4_,iVar6,local_30._4_4_);
        local_38 = local_48;
        local_30 = uStack_40;
        (**(code **)*param_1)(param_1,param_2,&local_38);
        FUN_0064d040(param_2,&local_38);
        lVar4 = FUN_00660520(&DAT_006446d0,1,param_1);
        lVar5 = param_1[0x12];
        *(longlong *)(lVar5 + 0x10) = lVar4;
        *(longlong *)(lVar4 + 0x28) = lVar5;
        *(longlong *)(lVar4 + 8) = param_2;
      }
      else {
        if (param_3 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)param_1[0x12] >> 8),1) << (param_3 & 0x1f) &
                  0x21U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          param_3 = 4;
        }
        lVar5 = FUN_00661230(param_1,param_2);
        if (lVar5 != 0) {
          FUN_00662e90(param_1,lVar5);
        }
        lVar5 = FUN_00661230(param_1,param_4);
        cVar1 = (&DAT_01df7474)[param_3];
        iVar6 = FUN_006605d0(param_1[0x12]);
        if (iVar6 == 1) {
          lVar4 = param_1[0x12];
          *(char *)(lVar4 + 0x20) = cVar1;
          if (cVar1 == '\x01') {
            uVar3 = FUN_006607d0(*(undefined8 *)(lVar4 + 0x10),2);
            *(undefined4 *)(lVar4 + 0x40) = uVar3;
            uVar3 = FUN_006607d0(*(undefined8 *)(param_1[0x12] + 0x10),1);
            *(undefined4 *)(param_1 + 0x13) = uVar3;
          }
          else if (cVar1 == '\x02') {
            uVar3 = FUN_006607d0(*(undefined8 *)(lVar4 + 0x10),1);
            *(undefined4 *)(lVar4 + 0x40) = uVar3;
            uVar3 = FUN_006607d0(*(undefined8 *)(param_1[0x12] + 0x10),2);
            *(undefined4 *)(param_1 + 0x13) = uVar3;
          }
        }
        lVar4 = FUN_00660520(&DAT_006446d0,1,param_1);
        *(longlong *)(lVar4 + 8) = param_2;
        if (lVar5 == 0) {
          cVar2 = *(char *)(param_1[0x12] + 0x20);
        }
        else {
          cVar2 = *(char *)(*(longlong *)(lVar5 + 0x28) + 0x20);
        }
        if (cVar1 == '\0') {
          cVar1 = cVar2;
        }
        if (cVar1 == cVar2) {
          FUN_00661910(param_1,lVar4,lVar5,(&DAT_01df747b)[param_3]);
        }
        else {
          FUN_006616e0(param_1,lVar4,lVar5,cVar1,(&DAT_01df747b)[param_3]);
        }
      }
    }
    else {
      *(longlong *)(lVar5 + 8) = param_2;
      FUN_00660af0(lVar5);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x180))((longlong *)param_1[5]);
  }
  return;
}

