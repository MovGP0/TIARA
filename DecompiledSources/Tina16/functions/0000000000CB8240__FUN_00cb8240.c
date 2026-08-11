/* Ghidra address: 00cb8240 */
/* Ghidra symbol: FUN_00cb8240 */


undefined8
FUN_00cb8240(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            short *param_5,undefined1 *param_6)

{
  byte bVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38 [12];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar3 = 0;
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_3 + -8);
  }
  if (4 < lVar3) {
    if (*(char *)(param_3 + 3) == '\x01') {
      iVar4 = 8;
      FUN_008783b0(&local_40,param_3,4);
      FUN_00414ad0(param_4,local_40);
      *param_6 = 0;
    }
    else if (*(char *)(param_3 + 3) == '\x03') {
      bVar1 = *(byte *)(param_3 + 4);
      iVar4 = bVar1 + 4;
      lVar3 = 0;
      if (param_3 != 0) {
        lVar3 = *(longlong *)(param_3 + -8);
      }
      if (lVar3 < (int)(bVar1 + 9)) goto LAB_00cb842e;
      uVar7 = 0;
      FUN_008785a0(&local_48,param_3,5,bVar1,0);
      FUN_00414ad0(param_4,local_48);
    }
    else {
      iVar4 = 0x14;
      FUN_00878500(param_3,local_38,5);
      iVar6 = 8;
      puVar5 = local_38;
      do {
        uVar2 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xa8))
                          (*(longlong **)PTR_DAT_020050b0,*puVar5);
        uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_008758e0(&local_50,local_38);
      FUN_00414ad0(param_4,local_50);
      *param_6 = 1;
    }
    *param_5 = (ushort)*(byte *)(param_3 + iVar4) * 0x100 + (ushort)*(byte *)(param_3 + (iVar4 + 1))
    ;
    iVar4 = iVar4 + 2;
    lVar3 = 0;
    if (param_3 != 0) {
      lVar3 = *(longlong *)(param_3 + -8);
    }
    FUN_00419260(param_2,&DAT_0086e978,1,lVar3 - iVar4);
    iVar6 = 0;
    if (param_3 != 0) {
      iVar6 = (int)*(undefined8 *)(param_3 + -8);
    }
    FUN_00874e50(param_3,iVar4,param_2,0,CONCAT44(uVar7,iVar6 - iVar4));
  }
LAB_00cb842e:
  FUN_00414560(&local_50,3);
  return param_2;
}

