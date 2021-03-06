/* Start Header -------------------------------------------------------
Copyright (C) 2020 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the
prior written consent of DigiPen Institute of Technology is prohibited.
Language		: C++ 11
Platform		: Windows 10 (X64)
Project			: GAM541
Filename		: MultipleProjectile.h
Author			: Dushyant Shukla (dushyant.shukla@digipen.edu | 60000519),
Creation date	: 03/13/2020
- End Header ----------------------------*/

#pragma once

#include "skill-system/BaseSkill.h"
#include "skill-system/support-skills/SupportSkill.h"

#include <memory>

namespace gswy
{
	class MultipleProjectile: public SupportSkill
	{
	public:
		MultipleProjectile();
		~MultipleProjectile();

		void SetMultiplier(const int multiplier);
		const int GetMultiplier();

		virtual void HandleSkill(BaseSkill* skill) override;
		virtual void RemoveSkill(std::shared_ptr<BaseSkill> skill) override;

	private:

		int m_multiplier;
	};
}