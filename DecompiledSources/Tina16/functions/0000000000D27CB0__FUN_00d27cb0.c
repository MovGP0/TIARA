/* Ghidra address: 00d27cb0 */
/* Ghidra symbol: FUN_00d27cb0 */


undefined8 FUN_00d27cb0(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_40;
  
  local_40 = *param_2;
  iVar5 = 5;
  do {
    puVar6 = param_3;
    uVar3 = (uint)local_40 ^ *puVar6;
    local_40._4_4_ = local_40._4_4_ ^ puVar6[1];
    uVar2 = local_40._4_4_ >> 0x17 & 0x1fe;
    uVar7 = local_40._4_4_ >> 0xf & 0x1fe;
    uVar8 = local_40._4_4_ >> 7 & 0x1fe;
    uVar9 = local_40._4_4_ * 2 & 0x1fe;
    uVar4 = uVar3 >> 0x17 & 0x1fe;
    uVar1 = *(uint *)(&DAT_01ec0250 + (longlong)(int)uVar2 * 4) ^
            *(uint *)(&DAT_01ec0a50 + (longlong)(int)uVar7 * 4) ^
            *(uint *)(&DAT_01ec1250 + (longlong)(int)uVar8 * 4) ^
            *(uint *)(&DAT_01ec1a50 + (longlong)(int)uVar9 * 4) ^
            *(uint *)(&DAT_01ec2250 + (longlong)(int)uVar4 * 4) ^
            *(uint *)(&DAT_01ec2a50 + (longlong)(int)(uVar3 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec3250 + (longlong)(int)(uVar3 >> 7 & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec3a50 + (longlong)(int)(uVar3 * 2 & 0x1fe) * 4);
    uVar3 = *(uint *)(&DAT_01ec0250 + (longlong)(int)(uVar2 | 1) * 4) ^
            *(uint *)(&DAT_01ec0a50 + (longlong)(int)(uVar7 | 1) * 4) ^
            *(uint *)(&DAT_01ec1250 + (longlong)(int)(uVar8 | 1) * 4) ^
            *(uint *)(&DAT_01ec1a50 + (longlong)(int)(uVar9 | 1) * 4) ^
            *(uint *)(&DAT_01ec2250 + (longlong)(int)(uVar4 | 1) * 4) ^
            *(uint *)(&DAT_01ec2a50 + (longlong)(int)(uVar3 >> 0xf & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec3250 + (longlong)(int)(uVar3 >> 7 & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec3a50 + (longlong)(int)(uVar3 * 2 & 0x1fe | 1) * 4);
    local_40 = CONCAT44(uVar3,uVar1);
    iVar5 = iVar5 + -1;
    param_3 = puVar6 + 2;
  } while (iVar5 != 0);
  uVar1 = uVar1 ^ puVar6[2];
  uVar3 = uVar3 ^ puVar6[3];
  return CONCAT44((uint)(byte)(&DAT_01ec0010)[(int)(uVar3 >> 0x18)] << 0x18 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar3 >> 0x10 & 0xff)] << 0x10 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar3 >> 8 & 0xff)] << 8 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar3 & 0xff)] ^ puVar6[5],
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar1 >> 0x18)] << 0x18 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar1 >> 0x10 & 0xff)] << 0x10 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar1 >> 8 & 0xff)] << 8 ^
                  (uint)(byte)(&DAT_01ec0010)[(int)(uVar1 & 0xff)] ^ puVar6[4]);
}

