/* Ghidra address: 014ab260 */
/* Ghidra symbol: FUN_014ab260 */


void FUN_014ab260(longlong *param_1,undefined8 param_2,short param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  short local_7c;
  short local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined8 local_74;
  undefined8 local_6c;
  short local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined1 local_4c [28];
  
  lVar4 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar4 = DAT_0210eae0;
  }
  if (param_3 == 0x12) {
    bVar1 = true;
    FUN_01d30f00(*param_1,&local_7c,2);
    iVar5 = (int)local_7c;
    if (-1 < iVar5 + -1) {
      do {
        FUN_01d30f00(*param_1,&local_50,0x18);
        if (local_50 != -1) {
          puVar2 = (undefined8 *)FUN_004095c0(0x24);
          uVar3 = FUN_0198d420(lVar4,local_50);
          *puVar2 = uVar3;
          FUN_00409a70(local_4c,puVar2 + 1,0x14);
          *(double *)((longlong)puVar2 + 0x1c) =
               (*(double *)((longlong)puVar2 + 0xc) + *(double *)((longlong)puVar2 + 0x14)) / 2.0;
          FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x468),puVar2);
          if (bVar1) {
            *(undefined8 *)(lVar4 + 0xa11) = *puVar2;
            *(undefined8 *)(lVar4 + 0xa19) = puVar2[1];
            *(undefined8 *)(lVar4 + 0xa21) = puVar2[2];
            *(undefined4 *)(lVar4 + 0xa29) = *(undefined4 *)(puVar2 + 3);
            bVar1 = false;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_7a,0x16);
    iVar5 = FUN_01d31a40(*param_1);
    if ((iVar5 == 0) && (local_7a != -1)) {
      uVar3 = FUN_0198d420(lVar4,(longlong)local_7a);
      *(undefined8 *)(lVar4 + 0xa11) = uVar3;
      *(undefined1 *)(lVar4 + 0xa19) = local_78;
      *(undefined1 *)(lVar4 + 0xa1a) = local_77;
      *(undefined1 *)(lVar4 + 0xa1b) = local_76;
      *(undefined1 *)(lVar4 + 0xa1c) = local_75;
      *(undefined8 *)(lVar4 + 0xa1d) = local_74;
      *(undefined8 *)(lVar4 + 0xa25) = local_6c;
      puVar2 = (undefined8 *)FUN_004095c0(0x24);
      *puVar2 = *(undefined8 *)(lVar4 + 0xa11);
      puVar2[1] = *(undefined8 *)(lVar4 + 0xa19);
      puVar2[2] = *(undefined8 *)(lVar4 + 0xa21);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar4 + 0xa29);
      *(double *)((longlong)puVar2 + 0x1c) =
           (*(double *)(lVar4 + 0xa1d) + *(double *)(lVar4 + 0xa25)) / 2.0;
      FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x468),puVar2);
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_64,0x14);
    iVar5 = FUN_01d31a40(*param_1);
    if ((iVar5 == 0) && (local_64 != -1)) {
      uVar3 = FUN_0198d420(lVar4,(longlong)local_64);
      *(undefined8 *)(lVar4 + 0xa11) = uVar3;
      *(undefined1 *)(lVar4 + 0xa19) = local_62;
      *(undefined1 *)(lVar4 + 0xa1a) = local_61;
      *(undefined1 *)(lVar4 + 0xa1b) = local_62;
      *(undefined1 *)(lVar4 + 0xa1c) = local_61;
      *(undefined8 *)(lVar4 + 0xa1d) = local_60;
      *(undefined8 *)(lVar4 + 0xa25) = local_58;
      puVar2 = (undefined8 *)FUN_004095c0(0x24);
      *puVar2 = *(undefined8 *)(lVar4 + 0xa11);
      puVar2[1] = *(undefined8 *)(lVar4 + 0xa19);
      puVar2[2] = *(undefined8 *)(lVar4 + 0xa21);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar4 + 0xa29);
      *(double *)((longlong)puVar2 + 0x1c) =
           (*(double *)(lVar4 + 0xa1d) + *(double *)(lVar4 + 0xa25)) / 2.0;
      FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x468),puVar2);
    }
  }
  return;
}

