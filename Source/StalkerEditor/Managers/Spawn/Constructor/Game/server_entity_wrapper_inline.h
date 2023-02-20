////////////////////////////////////////////////////////////////////////////
//	Module 		: server_entity_wrapper_inline.h
//	Created 	: 16.10.2004
//  Modified 	: 16.10.2004
//	Author		: Dmitriy Iassenev
//	Description : Server entity wrapper inline functions
////////////////////////////////////////////////////////////////////////////

#pragma once

IC	CServerEntityWrapper::CServerEntityWrapper	(ISE_Abstract *object)
{
	m_object	= object;
}

IC	ISE_Abstract &CServerEntityWrapper::object	() const
{
	return		(*m_object);
}
