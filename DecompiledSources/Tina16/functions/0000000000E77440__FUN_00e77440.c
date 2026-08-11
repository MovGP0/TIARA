/* Ghidra address: 00e77440 */
/* Ghidra symbol: FUN_00e77440 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e77440(longlong param_1,longlong param_2,short param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,double *param_7,double *param_8,
                 longlong param_9,longlong param_10)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 *local_170;
  undefined1 local_168;
  longlong local_150;
  longlong local_148;
  short local_13c;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120 [2];
  undefined1 local_10a;
  undefined1 local_109;
  double local_108 [2];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0;
  char local_df;
  double local_d8 [4];
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50 [7];
  
  local_120[0] = 0;
  local_138 = 0;
  pdVar6 = local_108;
  for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_7;
    param_7 = param_7 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar6 = local_d8;
  for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_8;
    param_8 = param_8 + 1;
    pdVar6 = pdVar6 + 1;
  }
  local_150 = param_1;
  local_148 = param_2;
  local_13c = param_3;
  local_139 = param_4;
  if (DAT_01edf020 == '\0') {
    FUN_01b20020(&local_138,*(undefined8 *)(param_1 + 0x128),&LAB_00e77e44);
    local_130 = local_138;
    local_128 = 0x11;
    FUN_00442f70(local_120,L"JFET Spice3F5 model is not supported (%s)",&local_130,0);
    FUN_01b05000(local_120[0],0);
  }
  else {
    FUN_0040d200(param_10 + 0x238,0xf0,0);
    *(int *)(param_10 + 0x260) = (int)local_13c;
    *(double *)(param_10 + 0x268) = local_d8[0];
    *(double *)(param_10 + 0x270) = local_d8[1];
    *(double *)(param_10 + 0x278) = local_d8[2];
    *(double *)(param_10 + 0x280) = local_d8[3];
    *(double *)(param_10 + 0x288) = local_b8;
    *(undefined8 *)(param_10 + 0x290) = local_b0;
    *(undefined8 *)(param_10 + 0x298) = local_a8;
    *(undefined8 *)(param_10 + 0x2a0) = local_a0;
    *(undefined8 *)(param_10 + 0x2a8) = local_98;
    *(undefined8 *)(param_10 + 0x2b0) = local_90;
    *(undefined8 *)(param_10 + 0x2b8) = local_88;
    *(undefined8 *)(param_10 + 0x2c0) = local_80;
    uVar3 = FUN_0040c840(local_78);
    *(undefined4 *)(param_10 + 0x2c8) = uVar3;
    *(undefined8 *)(param_10 + 0x2d0) = local_70;
    *(undefined8 *)(param_10 + 0x2f8) = local_68;
    *(double *)(param_10 + 0x308) = local_60 + 273.15;
    *(undefined8 *)(param_10 + 0x310) = local_58;
    *(undefined8 *)(param_10 + 0x318) = local_50[0];
    iVar4 = FUN_00e77400(auStack_198,local_d8);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,local_d8 + 1);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',1,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,local_d8 + 2);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',2,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,local_d8 + 3);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',3,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_b8);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',4,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_b0);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',5,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_a8);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',6,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_a0);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',7,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_98);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',8,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_90);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',9,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_68);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',10,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_60);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0xb,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_88);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0xc,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_80);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0xd,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_78);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0xe,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_70);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0xf,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,&local_58);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0x10,param_10 + 800);
    iVar4 = FUN_00e77400(auStack_198,local_50);
    FUN_00e773e0(*(char *)(param_9 + iVar4) == '\0',0x11,param_10 + 800);
    *(undefined8 *)(param_10 + 0x1d8) = 0;
    *(double *)(param_10 + 0x1d0) = local_108[0];
    *(double *)(param_10 + 0x1b0) = local_108[1];
    *(undefined8 *)(param_10 + 0x1b8) = 0x3ff0000000000000;
    *(undefined8 *)(param_10 + 0x1c0) = local_f0;
    *(undefined8 *)(param_10 + 0x1c8) = local_e8;
    FUN_00e773e0(local_f8,0,param_10 + 0x1a8);
    FUN_00e773e0(1,1,param_10 + 0x1a8);
    FUN_00e773e0(0,2,param_10 + 0x1a8);
    FUN_00e773e0(local_e0 == '\0',3,param_10 + 0x1a8);
    FUN_00e773e0(local_df == '\0',4,param_10 + 0x1a8);
    FUN_00e773e0(1,5,param_10 + 0x1a8);
    FUN_00e773e0(1,6,param_10 + 0x1a8);
    uVar2 = FUN_016ea1b0(local_150,0xd);
    *(undefined2 *)(param_10 + 0x22a) = uVar2;
    local_178 = local_139;
    local_170 = &local_109;
    local_168 = 1;
    FUN_016760d0(local_150,local_d8[3] / local_108[1],1,local_108[0]);
    local_178 = param_6;
    local_170 = &local_10a;
    local_168 = 1;
    FUN_016760d0(local_150,local_b8 / local_108[1],1,local_108[0]);
    *(undefined1 *)(param_10 + 0x22f) = param_5;
    *(undefined1 *)(param_10 + 0x22e) = local_139;
    *(undefined1 *)(param_10 + 0x230) = param_6;
    *(undefined1 *)(param_10 + 0x231) = local_109;
    *(undefined1 *)(param_10 + 0x232) = local_10a;
    (*DAT_0202e980)(param_10 + 0x238);
    (*DAT_0202e988)(param_10 + 0x238,param_10,*(longlong *)(local_148 + 0x1378) + 8);
    cVar1 = FUN_016e9e80(local_150,2);
    *(char *)(param_10 + 0x228) = cVar1;
    local_178 = 0;
    FUN_016ebe60(local_150,cVar1 + '\x01',local_109,local_10a);
    FUN_016ed1a0(local_150,*(char *)(param_10 + 0x228) + '\x02',local_109,local_10a);
  }
  FUN_00414480(&local_138);
  FUN_00414480(local_120);
  return;
}

